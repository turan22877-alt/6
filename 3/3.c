#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
int main(void) {
    setlocale(LC_CTYPE, "RUS");
    int chas, mini, sec, vvod;
    printf("вводи\n");
    scanf("%d", &vvod);
    sec = vvod % 60;
    mini = (vvod / 60) % 60;
    chas = vvod / 3600;
    if (chas == 0) {
        printf("мин - %d, сек - %d\n", mini, sec);
    }
    else {
        printf("час - %d, мин - %d, сек - %d\n", chas, mini, sec);
    }
    system("pause");
    return 0;
}