#include <stdio.h>

int a=100; 
void funcl()
{
	int a = 200;
	printf("funcl() 에서 a의 값==> %d\n", a);
}

void main()
{
	funcl();
	printf("main() 에서 a의 값 ==> %d\n", a);
}
