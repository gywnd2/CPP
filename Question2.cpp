#include <stdio.h>
int main()
{
	/* *p�� ABCD�� �ƴ� 1234�� �־ �����ϴ°�? */ 
	char *p="1234";
	printf("%s \n", p);
	printf("%s \n", p+1);
	printf("%s \n", p+2);
	printf("%s \n", p+3);
	
	return 0;
}
