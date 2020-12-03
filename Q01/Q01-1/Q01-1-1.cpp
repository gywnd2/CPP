// 22p. Q01-1-1
#include <iostream>
int main()
{
	int input, result;
	
	for(int n=1; n<=5; n++)
	{
		std::cout<<n<<"¹øÂ° Á¤¼öÀÔ·Â : ";
		std::cin>>input;
		result+=input;
	}
	 
	std::cout<<"ÇÕ°è´Â : "<<result;
	return 0;
}
