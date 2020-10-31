#include <iostream>
int main ()
{
	int a, b, res;
	std::cout<<"두 개의 숫자 입력 : ";
	std::cin>>a>>b;
	
	if(a<b)
	{
		for(int i=a+1;i<b; i++)
		res+=i;
	}
	else
	{
		for(int i=b+1; i<a; i++)
		{
		 res+=i;
		}
	}
	
	std::cout<<"두 정수 사이 숫자들의 합은 : ";
	std::cout<<res;
	return 0; 
}
