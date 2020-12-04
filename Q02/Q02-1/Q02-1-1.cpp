#include <iostream>

void increase(int &ref)
{
	ref++;
}

void inverse(int *ptr)
{
	*ptr*=-1;
}

int main(){
	int a=0;
	int *ref=&a;
	
	std::cout<<a<<std::endl;
	
	increase(a);
	std::cout<<a<<std::endl;
	inverse(ref);
	std::cout<<a<<std::endl;
	
	return 0;
}

