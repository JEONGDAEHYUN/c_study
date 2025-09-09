#include <stdio.h>

void main()
{
	FILE *wfp;
	int i, j;

	wfp = fopen("c:\\c_study\\gugu.txt","w");

	for(i=2;i<=9;i++)
	{
		fprintf(wfp, "#Á¦%d´Ü#",i);
	}

	fprintf(wfp, "\n\n");

	for(i=1;i<=9;i++)
	{
		for(j=2;j<=9;j++)
		{
			fprintf(wfp,"%2dx%2d=%2d",j,i,j*i);
		}
		fprintf(wfp,"\n");
	}
	fclose(wfp);
}
