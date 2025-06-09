#include <stdio.h>

void main(int argc, char* argv[]){
	FILE* wfp;
	FILE* rfp;
	char str[200];

	if(argc != 3){
		printf("매개변수가 3개가 아닙니다.\n");
		return;
	}

	rfp = fopen(argv[1], "r"); // 읽기 모드로 첫 번재 파일 열기
	wfp = fopen(argv[2], "w"); // w 모드로 두 번재 파일 열기

	for(;;) {
		fgets(str, 199, rfp);

		if(feof(rfp)) {
			break;
		}

		fputs(str, wfp);
	}

	fclose(rfp);
	fclose(wfp);

}
