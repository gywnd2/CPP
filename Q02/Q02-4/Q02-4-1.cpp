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

/* �� ���ڿ� �迭�� ���� �����ϰ�, 
strcpy�� ���� �����Ⱚ�� ���� ���ÿ� ä���ְ��� �ϴ� ���ڿ��� �����Ѵ�.
�� ������ �����Ѵ�� ���� ��. strcmp�� 0�� ���� ��, 1�� �ٸ� ����.*/ 
 
