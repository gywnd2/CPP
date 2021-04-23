#include <iostream>
#include <cstring>
using namespace std;

enum RISK_LEVEL
{
    RISK_A,
    RISK_B,
    RISK_C
};

class Employee
{
private:
    char name[100];

public:
    Employee() {}
    Employee(char *name)
    {
        strcpy(this->name, name);
    }
    void ShowYourName() const
    {
        cout << "name: " << name << endl;
    }
    virtual int GetPay() const = 0;
    virtual void ShowSalaryInfo() const = 0;
};

class PermanentWorker : public Employee
{
private:
    int salary;

public:
    PermanentWorker() {}
    PermanentWorker(char *name, int money)
        : Employee(name), salary(money)
    {
    }
    int GetPay() const
    {
        return salary;
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout << "salary: " << GetPay() << endl
             << endl;
    }
};

class TemporaryWorker : public Employee
{
private:
    int workTime;
    int payPerHour;

public:
    TemporaryWorker(char *name, int pay)
        : Employee(name), workTime(0), payPerHour(pay)
    {
    }
    void AddWorkTime(int time)
    {
        workTime += time;
    }
    int GetPay() const
    {
        return workTime * payPerHour;
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout << "salary: " << GetPay() << endl
             << endl;
    }
};

class SalesWorker : public PermanentWorker
{
private:
    int salesResult;   // 월 판매실적
    double bonusRatio; // 상여금 비율
public:
    SalesWorker() {}
    SalesWorker(char *name, int money, double ratio)
        : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
    {
    }
    void AddSalesResult(int value)
    {
        salesResult += value;
    }
    int GetPay() const
    {
        return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout << "salary: " << GetPay() << endl
             << endl;
    }
};

class ForeignSalesWorker : public SalesWorker
{
private:
    const RISK_LEVEL riskLevel;

public:
    ForeignSalesWorker() : riskLevel(RISK_LEVEL::RISK_A) {}
    ForeignSalesWorker(char *name, int money, double ratio, RISK_LEVEL riskEnum)
        : SalesWorker(name, money, ratio), riskLevel(riskEnum) {}
    double GetriskIncentive(RISK_LEVEL consider) const
    {
        switch (consider)
        {
        case 0:
            return 0.3;
        case 1:
            return 0.2;
        case 2:
            return 0.1;
        }
    }
    int GetIncentive() const
    {
        return (int)(SalesWorker::GetPay() * GetriskIncentive(riskLevel));
    }

    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout<<"salary: "<<SalesWorker::GetPay()<<endl;
        cout << "risk pay: " << GetIncentive() << endl;
        cout<<"sum: "<<SalesWorker::GetPay()+GetIncentive()<<endl;
        cout<<endl;
    }
};

class EmployeeHandler
{
private:
    Employee *empList[50];
    int empNum;

public:
    EmployeeHandler() : empNum(0)
    {
    }
    void AddEmployee(Employee *emp)
    {
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const
    {

        for (int i = 0; i < empNum; i++)
            empList[i]->ShowSalaryInfo();
    }
    void ShowTotalSalary() const
    {
        int sum = 0;

        for (int i = 0; i < empNum; i++)
            sum += empList[i]->GetPay();

        cout << "salary sum: " << sum << endl;
    }
    ~EmployeeHandler()
    {
        for (int i = 0; i < empNum; i++)
            delete empList[i];
    }
};

int main(void)
{
    EmployeeHandler handler;

    ForeignSalesWorker *fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
    fseller1->AddSalesResult(7000);
    handler.AddEmployee(fseller1);

    ForeignSalesWorker *fseller2 = new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
    fseller2->AddSalesResult(7000);
    handler.AddEmployee(fseller2);

    ForeignSalesWorker *fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
    fseller3->AddSalesResult(7000);
    handler.AddEmployee(fseller3);

    handler.ShowAllSalaryInfo();
    return 0;
}