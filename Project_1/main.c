#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void menu()
{
    printf("== 메뉴 ==\n");
    printf("1. 아메리카노 3000원 \n");
    printf("2. 카푸치노 4000원\n");
    printf("3. 카라멜 마끼아또 6000원\n");
    printf("4. 녹차라떼 5000원\n");
    printf("5. 딸기 스무디 4000원\n");
    printf("6. 달고나 라떼 2000원\n");
    printf("7. 종료\n");
    printf("==========\n");
    printf("원하는 메뉴를 선택하세요: ");
}


void cafeprogram()
{
    menu();


    int choice;
    int total = 0;
    while (1)
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            total += 3000;
            printf("아메리카노를 선택하셨습니다. 현재까지 총 금액: %d원\n", total);
            break;
        case 2:
            total += 4000;
            printf("카푸치노를 선택하셨습니다. 현재까지 총 금액: %d원\n", total);
            break;
        case 3:
            total += 6000;
            printf("카라멜 마끼아또를 선택하셨습니다. 현재까지 총 금액: %d원\n", total);
            break;
        case 4:
            total += 5000;
            printf("녹차라떼를 선택하셨습니다. 현재까지 총 금액: %d원\n", total);
            break;
        case 5:
            total += 4000;
            printf("딸기 스무디를 선택하셨습니다. 현재까지 총 금액: %d원\n", total);
            break;
        case 6:
            total += 2000;
            printf("달고나 라떼를 선택하셨습니다. 현재까지 총 금액: %d원\n", total);
            break;
        case 7:
            printf("주문을 종료합니다. 최종 결제 금액: %d원\n", total);
            return;
        default:
            printf("잘못된 선택입니다. 다시 입력해주세요.\n");
        }
    }
}


int main()
{
    cafeprogram();
    return 0;
}