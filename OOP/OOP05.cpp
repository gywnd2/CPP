// 뱅킹 v1.4

// 컨트롤 클래스 추가와 그에 따른 main() 변경

#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

int id, bal;
char name[100];
int choice;
int exitswitch = 0;

class Account
{
private:
    int AccID;
    char *Name;
    int Balance;

public:
    Account() {}

    Account(int id, const char *n, int bal)
        : AccID(id), Balance(bal)
    {
        Name = new char[strlen(n) + 1];
        strcpy(Name, n);
    }

    ~Account()
    {
        delete[] Name;
    }

    void showaccinfo() const
    {
        cout << "계좌ID : " << AccID << endl;
        cout << "성 명 : " << Name << endl;
        cout << "잔 고 : " << Balance << endl;
    }

    int returnaccid()
    {
        return this->AccID;
    }

    void depositvalue(int _bal)
    {
        Balance += _bal;
    }

    void withdrawvalue(int _bal)
    {
        Balance -= _bal;
    }
};

class AccountHandler
{
private:
    class Account *Acc[5];
    int accindex = 0;

public:
    void CreateAcc()
    {
        system("cls");

        cout << "[계좌개설]" << endl;
        cout << "계좌ID : ";
        cin >> id;
        cout << "이름: ";
        cin >> name;
        cout << "입금액 : ";
        cin >> bal;
        ++accindex;

        Acc[accindex - 1] = new Account(id, name, bal);
    }

    void Withdraw()
    {
        system("cls");
        cout << "[출 금]" << endl;
        cout << "계좌ID : ";
        cin >> id;
        cout << "출금액 : ";
        cin >> bal;

        for (int i = 0; i < accindex; i++) //accindex + 1로 되어있어서 오류났었음
        {
            if (Acc[i]->returnaccid() == id)
            {
                Acc[i]->withdrawvalue(bal);
                cout << "\n"
                     << bal << "원을 계좌ID " << Acc[i]->returnaccid() << " 에서 출금하였습니다." << endl;
                Sleep(3000);
            }
        }
    }

    void Deposit()
    {
        system("cls");
        cout << "[입  금]" << endl;
        cout << "계좌ID : ";
        cin >> id;
        cout << "입금액 : ";
        cin >> bal;

        for (int i = 0; i < accindex; i++)
        {
            if (Acc[i]->returnaccid() == id)
            {
                Acc[i]->depositvalue(bal);
                cout << "\n"
                     << bal << "원을 계좌ID " << Acc[i]->returnaccid() << " 에 입금하였습니다." << endl;
                Sleep(3000);
            }
        }
    }

    void ShowAllAcc()
    {
        system("cls");
        cout << "----- 계좌정보 전체 출력 -----" << endl;
        cout << "총 " << accindex << "개의 계좌가 있습니다.\n"
             << endl;
        for (int i = 0; i < accindex; i++)
        {
            cout << i + 1 << "번째 계좌 정보" << endl;
            Acc[i]->showaccinfo();
        }
        Sleep(3000);
    }
};

class AccountHandler accHandle;

void menu()
{
    system("cls");
    cout << "-----메뉴-----" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입 금" << endl;
    cout << "3. 출 금" << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
    cout << "선택 : ";
    cin >> choice;
}

int main()
{
    while (exitswitch == 0)
    {
        menu();

        switch (choice)
        {
        case 1:
            accHandle.CreateAcc();
            break;

        case 2:
            accHandle.Deposit();
            break;

        case 3:
            accHandle.Withdraw();
            break;

        case 4:
            accHandle.ShowAllAcc();
            break;

        case 5:
            system("cls");
            exitswitch = 1;
            cout << "프로그램을 종료합니다." << endl;
            break;

        default:
            menu();
        }
        if (exitswitch == 1)
            break;
    }
}