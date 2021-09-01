#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#ifdef _WIN32
#include <conio.h>
#define clrscr() printf("\e[1;1H\e[2J")
#endif

int sum = 30;
int step_sum = 0;
int step_max = 3;
int step_win_sum = step_max + 1;
int first_step_win = sum % step_win_sum;

int isWin()
{
    if (step_sum == sum)
        return 1;
    return 0;
}

void move()
{
    printf("======================\n");
    int human_move;
    int comp_move;

    printf("Nhap nuoc di\n");
    do
    {
        scanf("%d", &human_move);
    } while (human_move < 0 || human_move > step_max);

    step_sum += human_move;
    printf("Tong cong: %d\n", step_sum);
    if(isWin())
    {
        printf("Nguoi thang\n");
        exit(0);
    }

    if (step_sum < first_step_win)
        comp_move = first_step_win - step_sum;
    else if (step_sum % step_win_sum != first_step_win)
        comp_move = step_win_sum - human_move;
    else
        comp_move = rand() % 3 + 1;

    step_sum += comp_move;
    printf("\nMay di: %d\n", comp_move);
    printf("Tong cong: %d\n", step_sum);
        if(isWin())
    {
        printf("May thang\n");
        exit(0);
    }
}

int main()
{
    int turn;
    printf("Ban muon di truoc hay di sau\n");
    printf("1: Truoc\n");
    printf("2: Sau\n");
    scanf("%d", &turn);

    if (turn == 1)
        move();
    else
    {
        step_sum += first_step_win;
        printf("May di: %d\n", first_step_win);
        printf("Tong cong: %d\n", step_sum);
    }
    while (isWin() == 0)
    {
        move();
    }

    return 0;
}