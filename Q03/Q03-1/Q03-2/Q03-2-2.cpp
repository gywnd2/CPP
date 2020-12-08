#include <iostream>

class Printer{
	private:
		char* str;
	public:
		void SetString(char* ch){
			str=ch;
		}
		
		void ShowString(){
			std::cout<<str<<std::endl;
		}
};

int main(){
	Printer pnt;
	pnt.SetString("Hello World!");
	pnt.ShowString();
	
	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}
