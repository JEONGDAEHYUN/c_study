#include <stdio.h>

void main()
{
	int a;

	printf("점수를 입력하세요 : ");
		scanf("%d, &a");

	if (a >= 90)
		printf ("a");
	else
	 if (a >= 80)
 		printf ("b");
 	  else
           if (a >= 70)
		    printf ("c");
	    else
	      if (a >= 60)
	               printf ("d");
		else
			
	 	       printf ("f");
	printf ("학점 입니다. \n");
}
