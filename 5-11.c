#include <stdio.h>

void main(){
	int a, b;
	char op;

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &a, &op, &b); 

	switch (op) {
		case '+':
			printf("%d + %d = %d 입니다.\n", a, b, a + b);
			break;
			
		case '-':
			printf("%d - %d = %d 입니다.\n", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d 입니다.\n", a, b, a * b);
			break;
		case '/':
			if(b != 0)
			     printf("%d / %d = %d 입니다.\n", a, b, a / b);
			else
			     printf("0으로 나눌 수 없습니다.\n");
	        	break;		

		case '%':
			if(b != 0)
			     printf("%d %% %d = %d 입니다.\n", a, b, a % b);
			else
			     printf("0으로 나눌 수 없습니다.\n");	
			break;
		default:
		        printf("연산자를 잘못 입력했습니다.\n");	
	}
}
