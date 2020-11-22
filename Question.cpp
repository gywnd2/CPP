#include <iostream>
int main()
{
	int arr[3];
	arr[0]=10; //0x6ffe10
	std::cout<<&arr<<std::endl;
	
	int* show=arr;
	std::cout<<*show<<std::endl;
}
