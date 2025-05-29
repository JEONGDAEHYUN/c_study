#include <stdio.h>

void main()
{
	int a = 99;

	printf("and 연 산 : %d \n", (a >= 100) && (a <= 200));
	printf("or 연 산 : %d \n", (a >= 100) || (a <= 200));

	printf("not 연 산 : %d \n", !(a == 100));
}
