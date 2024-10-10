#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100];
    char date[11]; // YYYY-MM-DD
    int year, month, day;

    // 사용자로부터 이름 입력 받기
    printf("이름을 입력하세요: ");
    fgets(name, sizeof(name), stdin);
    
    // 개행 문자 제거
    int len = 0;
    while (name[len] != '\0') {
        if (name[len] == '\n') {
            name[len] = '\0'; // 개행 문자 제거
            break;
        }
        len++;
    }

    // 사용자로부터 날짜 입력 받기
    printf("현재 날짜를 \"yyyy-mm-dd\" 형식으로 입력하세요: ");
    fgets(date, sizeof(date), stdin);

    // 날짜 파싱
    if (sscanf(date, "%d-%d-%d", &year, &month, &day) != 3) {
        printf("날짜 형식이 올바르지 않습니다.\n");
        return 1; // 오류 코드 반환
    }

    // 날짜 유효성 체크
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("유효하지 않은 날짜입니다.\n");
        return 1; // 오류 코드 반환
    }

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
    printf("[사용자]: %s [실행시간]: %04d-%02d-%02d\n", name, year, month, day);
    printf("===================================================================================\n");

    return 0;
}
