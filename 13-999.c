#include <stdio.h>
#include <malloc.h>

void main()
{
	struct student {
		int age;
		char name[10];
	};

	struct student* p;

	int a, i;

	printf("�Է��� �л��� : ");
	scanf("%d", &a);

	p = (struct student*) malloc(sizeof(struct student) * a);

	for(i=0; i<a; i++){
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d", p[i].name, &p[i].age);
	}

	printf("\n-- �л� ��� --\n");
	for(i=0; i<a; i++){
		printf("�̸�:%s, ����:%d\n", p[i].name, p[i].age);
	}
}	
