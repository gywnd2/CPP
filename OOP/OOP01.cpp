// 뱅킹 v1

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
	std::cout << "-----메뉴-----" << std::endl;
	std::cout << "1. 계좌개설" << std::endl;
	std::cout << "2. 입 금" << std::endl;
	std::cout << "3. 출 금" << std::endl;
	std::cout << "4. 계좌정보 전체 출력" << std::endl;
	std::cout << "5. 프로그램 종료" << std::endl;
	std::cout << "선택 : ";
	std::cin >> choice;
}

void CreateAcc()
{
	system("cls");
	std::cout << "[계좌개설]" << std::endl;
	std::cout << "계좌ID : ";
	std::cin >> id;
	std::cout << "이름: ";
	std::cin >> name;
	std::cout << "입금액 : ";
	std::cin >> bal;
	accindex++;
}

void Deposit()
{
	system("cls");
	std::cout << "[입  금]" << std::endl;
	std::cout << "계좌ID : ";
	std::cin >> id;
	std::cout << "입금액 : ";
	std::cin >> bal;
}

void ShowAllAcc()
{
	system("cls");
	std::cout << "----- 계좌정보 전체 출력 -----" << std::endl;
	std::cout << "총 " << accindex - 1 << "개의 계좌가 있습니다." << std::endl;
	for (int i = 1; i < accindex; i++)
	{
		std::cout << "\n"
				  << i << "번째 계좌 정보" << std::endl;
		std::cout << "계좌ID : " << Acc[i].AccID << std::endl;
		std::cout << "성 명 : " << Acc[i].Name << std::endl;
		std::cout << "잔 고 : " << Acc[i].Balance << std::endl;
	}
	Sleep(3000);
}

void Withdraw()
{
	system("cls");
	std::cout << "[출 금]" << std::endl;
	std::cout << "계좌ID : ";
	std::cin >> id;
	std::cout << "출금액 : ";
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
							  << bal << "원을 계좌ID " << Acc[i].AccID << " 에 입금하였습니다." << std::endl;
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
							  << bal << "원을 계좌ID " << Acc[i].AccID << " 에서 출금하였습니다." << std::endl;
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
			std::cout << "프로그램을 종료합니다." << std::endl;
			break;
		}
		if (exitswitch == 1)
			break;
	}
}
