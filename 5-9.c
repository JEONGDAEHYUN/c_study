#include <stdio.h>

void main()
{
	int a;

	printf("1 ~ 4 중에 선택하세요 : ");
	scanf("%d", &a);

	switch (a)
	{
		case 1 :
			printf ("1를 선택했다\n");
			break;
		case 2	:
			printf("2를 선택했다\n");
			break;
		case 3	:
			printf("3을 선택했다\n");
			break;
		case 4 :
			printf ("4를 선택했다\n");
			break;
		default :
			printf ("이상한걸 선택했다.\n");
	}
}	
