#include <stdio.h>

void main()
{
	int i;

	for (i=1; i<=100; i++)
	{
		printf("for 문을 %d회 실행했습니다.\n", i);
		break;
	}

	printf("for 문을 동료했습니다.\n");
}
