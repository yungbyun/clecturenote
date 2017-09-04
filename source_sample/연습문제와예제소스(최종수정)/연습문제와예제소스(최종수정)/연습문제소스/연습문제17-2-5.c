#include <stdio.h>

struct profile        // 사원정보를 저장할 구조체 선언
{
	char name[20];    // 이름
	double grade;     // 학점
	int english;      // 영어 점수
};

void input_data(struct profile *ps);
void elite(struct profile *ps);

int main(void)
{
	struct profile new_staff[5];        // 구조체 배열 선언

	input_data(new_staff);              // 입력 함수 호출
	elite(new_staff);                   // 엘리트 사원 출력

	return 0;
}

void input_data(struct profile *ps)     // 매개변수는 구조체 포인터
{
	int i;

	printf("이름, 학점, 영어점수를 입력하세요.\n");
	for (i = 0; i < 5; i++)             // 구조체 포인터로 멤버 참조
	{
		scanf("%s%lf%d", (ps + i)->name, &((ps + i)->grade), &((ps + i)->english));
	}
}

void elite(struct profile *ps)          // 엘리트 사원을 출력하는 함수
{
	int i;

	for (i = 0; i < 5; i++)             // 배열 요소 수만큼 반복
	{                                   // 학점이 4.0 이상, 영어점수가 900점 이상이면
		if ((((ps + i)->grade) >= 4.0) && (((ps + i)->english) >= 900))
		{
			printf("%s, %.1lf, %d\n",   // 각 멤버 출력
				(ps + i)->name, (ps + i)->grade, (ps + i)->english);
		}
	}
}