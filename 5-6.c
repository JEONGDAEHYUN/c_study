#include <stdio.h>

void main()
{
	int a;

	printf("정수를 입력하세요 : ");
	scanf("%d", &a);

	if (a%2 == 0)
	{

		printf ("짝수를 입력했순요 ..\n");
	}
	else
	{
		printf ("홀수를 입력했군요 ..\n");
	}
}
