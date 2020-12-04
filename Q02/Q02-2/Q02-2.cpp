#include <iostream>

int main(){
	const int num=12;
	const int *ptr=&num;
	const int &ref=*ptr;
	
	std::cout<<num<<std::endl;
	std::cout<<*ptr<<std::endl;
	std::cout<<ref<<std::endl;
}
