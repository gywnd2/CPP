#include <iostream>
int main ()
{
	int a, b, res;
	std::cout<<"�� ���� ���� �Է� : ";
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
	
	std::cout<<"�� ���� ���� ���ڵ��� ���� : ";
	std::cout<<res;
	return 0; 
}
