#include <stdio.h>

void func1(int a)
{
	a = a + 1;
	printf("���޹��� a ==> %d\n", a);
}

void main()
{
	int a = 10;

	func1(a);
	printf("funcl() ���� ���� a ==> %d\n", a);
}
