#include <stdio.h>
#include <stdlib.h>

typedef struct train Train;
struct train
{
	int seats;        // 객차의 좌석 수
	Train *next;      // 다음 객차를 연결할 포인터
};

int main(void)
{
	Train *head = NULL, *tail;
	int i;

	for (i = 0; i < 5; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train *)malloc(sizeof(Train));
		}
		else
		{
			tail->next = (Train *)malloc(sizeof(Train));
			tail = tail->next;
		}
	}

	return 0;
}