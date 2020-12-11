// ��ŷ v1.3

//const �Լ� ���� �߰�

#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

int id, bal;
char name[100];
int choice, accindex = 0;
int exitswitch = 0;

class Account
{
private:
    int AccID;
    char *Name;
    int Balance;

public:
    Account(int id, const char *n, int bal)
        : AccID(id), Balance(bal)
    {
        Name = new char[strlen(n) + 1];
        strcpy(Name, n);
    }

    Account(const Account &acc)
        : AccID(acc.AccID), Balance(acc.Balance)
    {
        Name = new char[strlen(acc.Name) + 1];
        strcpy(Name, acc.Name);
    }

    ~Account()
    {
        delete[] Name;
    }

    void showaccinfo() const
    {
        cout << "����ID : " << AccID << endl;
        cout << "�� �� : " << Name << endl;
        cout << "�� �� : " << Balance << endl;
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

class Account *Acc[5];

void CreateAcc()
{
    system("cls");

    cout << "[���°���]" << endl;
    cout << "����ID : ";
    cin >> id;
    cout << "�̸�: ";
    cin >> name;
    cout << "�Աݾ� : ";
    cin >> bal;
    ++accindex;

    Acc[accindex - 1] = new Account(id, name, bal);
}

void Withdraw()
{
    system("cls");
    cout << "[�� ��]" << endl;
    cout << "����ID : ";
    cin >> id;
    cout << "��ݾ� : ";
    cin >> bal;

    for (int i = 0; i < accindex; i++) //accindex + 1�� �Ǿ��־ ����������
    {
        if (Acc[i]->returnaccid() == id)
        {
            Acc[i]->withdrawvalue(bal);
            cout << "\n"
                 << bal << "���� ����ID " << Acc[i]->returnaccid() << " ���� ����Ͽ����ϴ�." << endl;
            Sleep(3000);
        }
    }
}

void Deposit()
{
    system("cls");
    cout << "[��  ��]" << endl;
    cout << "����ID : ";
    cin >> id;
    cout << "�Աݾ� : ";
    cin >> bal;

    for (int i = 0; i < accindex; i++)
    {
        if (Acc[i]->returnaccid() == id)
        {
            Acc[i]->depositvalue(bal);
            cout << "\n"
                 << bal << "���� ����ID " << Acc[i]->returnaccid() << " �� �Ա��Ͽ����ϴ�." << endl;
            Sleep(3000);
        }
    }
}

void ShowAllAcc()
{
    system("cls");
    cout << "----- �������� ��ü ��� -----" << endl;
    cout << "�� " << accindex << "���� ���°� �ֽ��ϴ�.\n"
         << endl;
    for (int i = 0; i < accindex; i++)
    {
        cout << i + 1 << "��° ���� ����" << endl;
        Acc[i]->showaccinfo();
    }
    Sleep(3000);
}

void menu()
{
    system("cls");
    cout << "-----�޴�-----" << endl;
    cout << "1. ���°���" << endl;
    cout << "2. �� ��" << endl;
    cout << "3. �� ��" << endl;
    cout << "4. �������� ��ü ���" << endl;
    cout << "5. ���α׷� ����" << endl;
    cout << "���� : ";
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
            CreateAcc();
            break;

        case 2:
            Deposit();
            break;

        case 3:
            Withdraw();
            break;

        case 4:
            ShowAllAcc();
            break;

        case 5:
            system("cls");
            exitswitch = 1;
            cout << "���α׷��� �����մϴ�." << endl;
            break;

        default:
            menu();
        }
        if (exitswitch == 1)
            break;
    }
}