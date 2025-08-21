#include <stdio.h>

void main()
{
	int gugu[9][9];
	int i, j;

	for(i=0; i<9; i++)
	{
		for(j=0; j<8; j++)
		{
			gugu[i][j] = (i+1)*(j+2);
		}
	}

	for (i=0; i<9; i++)
	{
		for(j=0; j<8; j++)
		{
			printf("%dx%d=%2d", j+2, i+1, gugu[i][j]);
		}
		printf("\n");
	}
}
