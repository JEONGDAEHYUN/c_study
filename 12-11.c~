#include <stdio.h>
#include <malloc.h>

void main(){

	int a, i;
	int* p;
	int hap = 0;

	printf("입력할 개수는 ?");
	scanf("%d", &a);
	p = (int*)malloc(sizeof(int)*a);

	for(i=0; i<a; i++){
	
		printf("%d 번째 숫자 : ", i+1);
		scanf("%d", p+i);
	}

	for(i=0; i<a; i++){
	  	if(*(p+i)%2 == 0){
			hap += *(p+i);
		}
	}

	printf("%d", hap);
}
