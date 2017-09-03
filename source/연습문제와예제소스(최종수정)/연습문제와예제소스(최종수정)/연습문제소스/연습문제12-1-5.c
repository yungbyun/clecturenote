#include <stdio.h>
#include <string.h>                           // strlen 함수를 쓰기 위한 헤더 파일 포함

int main(void)
{
	char name[20];                            // 이름을 저장할 배열
	char phone[20];                           // 전화번호를 저장할 배열
	char addr[80];                            // 주소를 저장할 배열

	printf("이름 : ");
	fgets(name, sizeof(name), stdin);         // 이름 입력
	name[strlen(name) - 1] = '\0';            // 끝에 함께 입력된 개행문자 삭제

	printf("전화번호 : ");
	fgets(phone, sizeof(phone), stdin);       // 전화번호 입력
	phone[strlen(phone) - 1] = '\0';          // 개행문자 삭제

	printf("주소 : ");
	fgets(addr, sizeof(addr), stdin);         // 주소 입력
	addr[strlen(addr) - 1] = '\0';            // 개행문자 삭제

	printf("%s, %s, %s", name, phone, addr);  // 이름, 전화번호, 주소를 한 줄에 출력

	return 0;
}