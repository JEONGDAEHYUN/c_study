#include <stdio.h>

int a=100; 
void funcl()
{
	int a = 200;
	printf("funcl() ���� a�� ��==> %d\n", a);
}

void main()
{
	funcl();
	printf("main() ���� a�� �� ==> %d\n", a);
}
