// ��ŷ v1

#include <iostream>
#include <cstring>
#include <windows.h>

int id, bal;
char name[100];
int choice, accindex = 0;
int exitswitch = 0;

struct Account
{
	int AccID;
	char Name[100];
	int Balance;
};

struct Account Acc[10];

void menu()
{
	system("cls");
	std::cout << "-----�޴�-----" << std::endl;
	std::cout << "1. ���°���" << std::endl;
	std::cout << "2. �� ��" << std::endl;
	std::cout << "3. �� ��" << std::endl;
	std::cout << "4. �������� ��ü ���" << std::endl;
	std::cout << "5. ���α׷� ����" << std::endl;
	std::cout << "���� : ";
	std::cin >> choice;
}

void CreateAcc()
{
	system("cls");
	std::cout << "[���°���]" << std::endl;
	std::cout << "����ID : ";
	std::cin >> id;
	std::cout << "�̸�: ";
	std::cin >> name;
	std::cout << "�Աݾ� : ";
	std::cin >> bal;
	accindex++;
}

void Deposit()
{
	system("cls");
	std::cout << "[��  ��]" << std::endl;
	std::cout << "����ID : ";
	std::cin >> id;
	std::cout << "�Աݾ� : ";
	std::cin >> bal;
}

void ShowAllAcc()
{
	system("cls");
	std::cout << "----- �������� ��ü ��� -----" << std::endl;
	std::cout << "�� " << accindex - 1 << "���� ���°� �ֽ��ϴ�." << std::endl;
	for (int i = 1; i < accindex; i++)
	{
		std::cout << "\n"
				  << i << "��° ���� ����" << std::endl;
		std::cout << "����ID : " << Acc[i].AccID << std::endl;
		std::cout << "�� �� : " << Acc[i].Name << std::endl;
		std::cout << "�� �� : " << Acc[i].Balance << std::endl;
	}
	Sleep(3000);
}

void Withdraw()
{
	system("cls");
	std::cout << "[�� ��]" << std::endl;
	std::cout << "����ID : ";
	std::cin >> id;
	std::cout << "��ݾ� : ";
	std::cin >> bal;
}

int main()
{
	while (exitswitch != 1)
	{
		menu();

		switch (choice)
		{
		case 1:
			CreateAcc();
			Acc[accindex].AccID = id;
			strcpy(Acc[accindex].Name, name);
			Acc[accindex].Balance = bal;
			accindex++;
			break;

		case 2:
			Deposit();
			for (int i = 0; i < accindex + 1; i++)
			{
				if (Acc[i].AccID == id)
				{
					Acc[i].Balance += bal;
					std::cout << "\n"
							  << bal << "���� ����ID " << Acc[i].AccID << " �� �Ա��Ͽ����ϴ�." << std::endl;
					Sleep(3000);
				}
			}
			break;

		case 3:
			Withdraw();
			for (int i = 0; i < accindex + 1; i++)
			{
				if (Acc[i].AccID == id)
				{
					Acc[i].Balance -= bal;
					std::cout << "\n"
							  << bal << "���� ����ID " << Acc[i].AccID << " ���� ����Ͽ����ϴ�." << std::endl;
					Sleep(3000);
				}
			}
			break;

		case 4:
			ShowAllAcc();
			break;

		case 5:
			system("cls");
			exitswitch = 1;
			std::cout << "���α׷��� �����մϴ�." << std::endl;
			break;
		}
		if (exitswitch == 1)
			break;
	}
}
