#include <stdio.h>

int main(void)
{
	int kor = 70, eng = 80, mat = 90;   // 세 과목의 변수 선언과 초기화
	int tot;                            // 총점을 저장할 변수 선언

	tot = kor + eng + mat;              // 세 변수의 값을 더해 총점 변수에 저장
	printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, mat);  // 점수 출력
	printf("총점 : %d", tot);           // 총점 출력

	return 0;
}