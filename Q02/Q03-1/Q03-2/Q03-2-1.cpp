#include <iostream>

class Calculator{
	private:
		int addc, divc, minc, mulc;
	
	public:
		void Init(){
			addc=0;
			divc=0;
			minc=0;
			mulc=0;
		}
		
		int Add(int a, int b){
			addc++;
			return a+b;
		}
		
		int Div(int a, int b){
			divc++;
			return a/b;
		}
		
		int Min(int a, int b){
			minc++;
			return a-b;
		}
		
		int Mul(int a, int b){
			mulc++;
			return a*b;
		}
		
		void ShowOpCount(){
			std::cout<<"µ¡¼À: "<<addc<<" »¬¼À : "<<minc<<" °ö¼À : "<<mulc<<" ³ª´°¼À : "<<divc<<std::endl;
		};
};

int main(){
	Calculator cal;
	cal.Init();
	std::cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<std::endl;
	std::cout<<"3.5 / 1.7 = "<<cal.Div(3.5, 1.7)<<std::endl;
	std::cout<<"2.2 - 1.5 = "<<cal.Min(2.2, 1.5)<<std::endl;
	std::cout<<"4.9 / 1.2 = "<<cal.Div(4.9, 1.2)<<std::endl;
	cal.ShowOpCount();
	return 0;
}
