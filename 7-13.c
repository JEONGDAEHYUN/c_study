#include <stdio.h>

void main()
{
	int start, end, step;
	int multiple_sum = 0;

	printf("합계의 시작값 => ");
	scanf("%d", &start);

	printf("합계의 끝값 => ");
	scanf("%d", &end);

	printf("배수 => ");
	scanf("%d", &step);

	for (int i = start; i <= end; i++) {
		if (i % step == 0) {
			multiple_sum += i;
		}
	}
	
	printf("%d부터 %d까지의 %d배수의 합계 ==> %d\n", start, end, step, multiple_sum);

}

