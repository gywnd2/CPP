// 22p. Q01-1-1
#include <iostream>
int main()
{
	int input, result;
	
	for(int n=1; n<=5; n++)
	{
		std::cout<<n<<"��° �����Է� : ";
		std::cin>>input;
		result+=input;
	}
	 
	std::cout<<"�հ�� : "<<result;
	return 0;
}
