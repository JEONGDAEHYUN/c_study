#include <stdio.h>

void main(int argc, char* argv[])
{
	char str[200];
	FILE *rfp;

	if (argc != 2) //�Ű����� �� �ϳ��� �ƴϸ� �޽����� ������� �� ���α׷��� ������
	{
		printf("\n-- �Ű������� 1�� ����ϼ��� --\n");
		return;
	}

	rfp = fopen(argv[1], "r"); // ù ��° �Ű������� �Ѿ�� ���� �б� ���� ��

	for(;;)
	{
		fgets(str, 199, rfp); // ������ ������ ���� �о� ����

		if (feof(rfp)) // ������ ���̸� ���� ������ ������
			break;

		printf("%s", str); // ���� ������ �����
	}

	fclose(rfp);
}
