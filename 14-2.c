#include <stdio.h>

void main(int argc, char* argv[])
{
	char str[200];
	FILE *rfp;

	if (argc != 2) //매개변수 가 하나가 아니면 메시지를 출려력한 후 프로그램을 종료함
	{
		printf("\n-- 매개변수를 1개 사용하세요 --\n");
		return;
	}

	rfp = fopen(argv[1], "r"); // 첫 번째 매개변수로 넘어온 것을 읽기 모드로 염

	for(;;)
	{
		fgets(str, 199, rfp); // 파일의 내용을 한줄 읽어 들임

		if (feof(rfp)) // 파일의 끝이면 무란 루프를 종료함
			break;

		printf("%s", str); // 읽을 내용을 출력함
	}

	fclose(rfp);
}
