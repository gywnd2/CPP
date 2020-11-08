#include <iostream>

int main()
{
	int std;
	std::cout<<"구구단 몇단? : ";
	std::cin>>std;
	for(int r=1;r<10;r++)
	{
		std::cout<<std<<"X"<<r<<"="<<std*r<<std::endl;
	 } 
	 
	return 0; 
}
