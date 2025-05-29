#include <stdio.h>

void main()
{
	enum week {sun, mon, tue, wed, thu, fri, sat};
	enum week ww;
	ww = sat;

	if (ww == 0)
		printf("오늘은 일요일입입니다.\n");
	else
		printf("오늘은 일요일이 아닙니다.\n");
}
