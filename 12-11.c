#include <stdio.h>
#include <malloc.h>

void main(){

	int a, i;
	int* p;
	int hap = 0;

	printf("�Է��� ������ ?");
	scanf("%d", &a);
	p = (int*)malloc(sizeof(int)*a);

	for(i=0; i<a; i++){
	
		printf("%d ��° ���� : ", i+1);
		scanf("%d", p+i);
	}

	for(i=0; i<a; i++){
	  	if(*(p+i)%2 == 0){
			hap += *(p+i);
		}
	}

	printf("%d", hap);
}
