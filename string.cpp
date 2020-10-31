#include <iostream>
int main()
{
	char name[100], lang[200]; 
	std::cout<<"이름은요? ";
	std::cin>>name;
	std::cout<<"좋아하는 언어는요? ";
	std::cin>>lang;
	
	std::cout<<"아~ 이름은 "<<name<<"이시고 "<<lang<<"를 좋아하시는군요?";
	return 0; 
}
