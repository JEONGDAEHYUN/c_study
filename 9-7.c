#include <stdio.h>

void main()
{
	char ch;
	char* p;
	char* q;

	ch = 'A';
	p = &ch;

	q = p;

	*q = 'z';

	printf("ch�� ������ �ִ� �� : ch ==> %c \n\n", ch);
}
