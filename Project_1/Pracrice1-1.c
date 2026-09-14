#include <stdio.h>

void half_circle(int size, char width)
{
    for (int line = 0; line < size / 3; line++)
    {
        int space = size / 3 - 1 - line;   // 왼쪽 여백 칸 수 (아래로 갈수록 줄어 0이 됨)
        int fill = size - 1 - 2 * space;   // 반원 한 덩어리의 가로 폭 (아래로 갈수록 2씩 커짐)
        int gap = 2 * space + 1;           // 두 반원 사이 공백 칸 수 (아래로 갈수록 2씩 줄어 1이 됨)

        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }

        for (int i = 0; i < fill; i++)
        {
            if (i == 0 || i == fill - 1)
                printf("*");
            else
                printf("%c", width);
        }

        for (int i = 0; i < gap; i++)
        {
            printf(" ");
        }

        for (int i = 0; i < fill; i++)
        {
            if (i == 0 || i == fill - 1)
                printf("*");
            else
                printf("%c", width);
        }
        printf("\n");
    }
}

void triangle(int size, char width)
{
    for (int line = 0; line < size; line++)
    {
        int x = 2 * size - 1 - 2 * line;   // 이 줄에 찍을 문자 개수 (2*size-1에서 2씩 감소)

        for (int i = 0; i < line; i++)
        {
            printf(" ");
        }

        for (int i = 0; i < x; i++)
        {
            if (i == 0 || i == x - 1)
                printf("*");
            else
                printf("%c", width);
        }
        printf("\n");
    }
}

int main(void)
{
    int size;
    char width;

    printf("도형 크기: \n");
    scanf("%d", &size);
    printf("도형 내부 채울 문자: \n");
    scanf(" %c", &width);

    half_circle(size, width);
    triangle(size, width);

    return 0;
}