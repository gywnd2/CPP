#include <iostream>

int main()
{
	int norm=50;
	int sales;
	int salary;
	
	while(1)
	{
		std::cout<<"판매 금액을 만원 단위로 입력(-1 to end) : ";
		std::cin>>sales;
		
		if(sales==-1){
		 std::cout<<"프로그램을 종료합니다.";
		 return 0;
		 }
		 
		 else{
	        salary = norm+sales*0.12;
		    std::cout<<"이번 달 급여: "<<salary<<"만원"<<std::endl;
		    // salary = norm+sales*0.12;를 8행에 미리 넣게 되면 값 입력도 되지 않은 채로 연산을 수행 하므로
			// 제대로 된 출력 값이 도출될 수 없다. 
	    }
	}
}
