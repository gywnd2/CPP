// 22p. Q01-1-2

#include <iostream>
int main()
{
	char name[100];
	char pnumber[200];
	
	std::cout<<"이름 입력 : ";
	std::cin>>name;
	
	std::cout<<"전화번호 입력 : ";
	std::cin>>pnumber;
	
	std::cout<<"이름은 "<<name<<", 전화번호는 "<<pnumber<<" 입니다.";
	return 0; 
}
