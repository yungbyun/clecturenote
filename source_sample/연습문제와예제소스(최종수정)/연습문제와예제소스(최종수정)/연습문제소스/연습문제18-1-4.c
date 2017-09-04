#include <stdio.h>

int main(void)
{
	FILE *ifp, *ofp;                  // 파일 포인터
	char src[80], des[80];            // 파일명을 입력할 배열
	int ch;                           // 문자를 입력할 변수

	printf("복사할 파일명 : ");
	scanf("%s", src);
	printf("복사받을 파일명 : ");
	scanf("%s", des);

	ifp = fopen(src, "r");            // 복사할 파일 개방
	if (ifp == NULL)
	{
		printf("# %s파일이 없습니다.\n", src);
		return 1;
	}

	ofp = fopen(des, "w");            // 복사받을 파일 개방
	if (ofp == NULL)
	{
		printf("# %s파일을 만들지 못했습니다.\n", des);
		return 1;
	}

	while ((ch = fgetc(ifp)) != EOF)  // 복사할 파일의 문자를 하나씩 읽어
	{
		fputc(ch, ofp);               // 복사받을 파일에 출력
	}
	printf("# %s파일을 %s파일로 복사했습니다.\n", src, des);
	fclose(ifp);                      // 파일 닫음
	fclose(ofp);

	return 0;
}