#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c, mul;
	char num[10] = { 0,0,0,0,0,0,0,0,0,0 };

	std::cin>> a >> b >> c;
	mul = a * b * c;

	string digit = to_string(mul);
	
	for (int i = 0; i < digit.length(); i++) {
		switch (digit.at(i))
		{
		   case 0:
			   num[0] += 1;
			   break;
		   case 1:
			   num[1] += 1;
			   break;
		   case 2:
			   num[1] += 1;
			   break;
		   case 3:
			   num[1] += 1;
			   break;
		   case 4:
			   num[1] += 1;
			   break;
		   case 5:
			   num[1] += 1;
			   break;
		   case 6:
			   num[1] += 1;
			   break;
		   case 7:
			   num[1] += 1;
			   break;
		   case 8:
			   num[1] += 1;
			   break;
		   case 9:
			   num[1] += 1;
			   break;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << num[i] << ::endl;
	}
}
