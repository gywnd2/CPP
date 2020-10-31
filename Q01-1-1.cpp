// 22p. Q01-1-1
#include <iostream>
int main()
{
	int input, result;
	
	for(int n=1; n<=5; n++)
	{
		std::cout<<n<<"번째 정수입력 : ";
		std::cin>>input;
		result+=input;
	}
	 
	std::cout<<"합계는 : "<<result;
	return 0;
}
