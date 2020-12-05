#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char* str1="Hello";
	char* str2=" Everyone";
	char str3[50];
	
	cout<<strlen(str1)<<endl;
	cout<<strlen(str2)<<endl;
	
	strcpy(str3, str1);
	strcat(str3, str2);
	cout<<str3<<endl;
	
	strcpy(str3, str2);
	cout<<str3<<endl;
	
	cout<<strcmp(str1, str2)<<endl;
}

/* 빈 문자열 배열을 먼저 선언하고, 
strcpy를 통해 쓰레기값을 비움과 동시에 채워넣고자 하는 문자열을 복사한다.
그 다음은 생각한대로 쓰면 됨. strcmp는 0이 같을 때, 1이 다를 때임.*/ 
 
