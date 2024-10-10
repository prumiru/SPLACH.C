#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // sleep 함수 사용을 위해 포함

int main() {
    char name[100];
    char date[11]; // YYYY-MM-DD
    int year, month, day;

    // 사용자로부터 이름 입력 받기
    printf("당신의 이름을 입력하세요: ");
    fgets(name, sizeof(name), stdin);
    
    // 개행 문자 제거
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0'; // 개행 문자 제거
            break;
        }
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

    // 입력 정상 처리 메시지
    printf("**입력이 정상적으로 처리되었습니다.**\n");

    // 3초 대기
    sleep(3);

    // 화면 지우기 (Unix/Linux 시스템에서 clear 명령어 사용)
    system("clear"); // 또는 "cls"로 윈도우 시스템에서

    // 스플래시 화면 출력
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("                         [마그라테아 ver 0.1]                               \n");
    printf("           풀 한 포기 없는 황무지에서 반짝이는 행성을 만들내는 곳 마그라테아,         \n");
    printf("         사람들이 보지 못하는 잠재력을 찾고 전문가의 손길을 더해 보석을 빗는 곳,    \n");
    printf("           마그라테아에 오신걸 환영합니다.                                   \n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("[사용자]: %s [실행 시간]: %04d-%02d-%02d\n", name, year, month, day);
    printf("===================================================================================\n");

    // 정 삼각형 출력
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 역 삼각형 출력
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
