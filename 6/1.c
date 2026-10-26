#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int proverca(int god) {
    if ((god % 400 == 0) || ((god % 4 == 0) && (god % 100 != 0))) {
        return 1;
    }
    else return 0;
}



int main(void) {
    setlocale(LC_CTYPE, "RUS");
    int yeas;
    printf("вводи год\n");
    scanf("%d", &yeas);
    int g = proverca(yeas);
    if (g) {
        intf("висакосный\т");
    }else {
        printf("no\n");
    }
    system("pause");
    return 0;
}