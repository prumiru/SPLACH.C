#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char name[100];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    // 사용자로부터 이름 입력 받기
    printf("이름을 입력하세요: ");
    fgets(name, sizeof(name), stdin);

    // 현재 날짜 출력
    printf("현재 날짜: %d-%02d-%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);

    // 화면 지우기 (터미널에서 작동하는 경우)
    printf("\033[H\033[J");

    // 스플래시 화면 출력
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        if (i == 1) {
            printf("                         [마그라테아 ver 0.1]                               *****\n");
        }
        else if (i == 2) {
            printf("**   풀 한 포기 없는 황무지에서 반짝이는 행성을 만들내는 곳 마그라테아,            ****\n");
        }
        else if (i == 3) {
            printf("***   사람들이 보지 못하는 잠재력을 찾고 전문가의 손길을 더해 보석을 빗는 곳,       *** \n");
        }
        else if (i == 4) {
            printf("****    마그라테아에 오신걸 환영합니다.                                          **\n");
        }
        else if (i == 5) {
            printf("*****                                                                          *\n");
        }
    }

    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("[사용자]: %s", name);
    printf("[실행 시간]: %d년 %d월 %d일\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
    printf("===========================================================================\n");

    return 0;
}
