#include <iostream>

int main()
{
	int norm=50;
	int sales;
	int salary;
	
	while(1)
	{
		std::cout<<"�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : ";
		std::cin>>sales;
		
		if(sales==-1){
		 std::cout<<"���α׷��� �����մϴ�.";
		 return 0;
		 }
		 
		 else{
	        salary = norm+sales*0.12;
		    std::cout<<"�̹� �� �޿�: "<<salary<<"����"<<std::endl;
		    // salary = norm+sales*0.12;�� 8�࿡ �̸� �ְ� �Ǹ� �� �Էµ� ���� ���� ä�� ������ ���� �ϹǷ�
			// ����� �� ��� ���� ����� �� ����. 
	    }
	}
}
