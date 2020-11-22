#include <stdio.h>
int main()
{
	/* *p에 ABCD가 아닌 1234를 넣어도 동작하는가? */ 
	char *p="1234";
	printf("%s \n", p);
	printf("%s \n", p+1);
	printf("%s \n", p+2);
	printf("%s \n", p+3);
	
	return 0;
}
