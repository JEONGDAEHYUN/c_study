#include <stdio.h>

void main()
{
	int a, b;

		while (1)
		{
			printf("더할 두 수 입력 (멈추려변 Ctrl + C) : ");
			scanf("%d %d", &a, &b);

			printf("%d + %d = %d \n", a, b, a+b);
		}
}
