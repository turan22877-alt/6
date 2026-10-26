#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

double menife(x) {
    double g;
    g = x / (pow(x, 3) - 6);
    return g;
}
double ostal(x) {

    double g;
    g = (pow(x, 2) * (-1)) + 3 * x + 9;
    return g;
}

int main(void) {
    setlocale(LC_CTYPE, "RUS");
    printf("вводи\n");
    double x, fx;
    scanf("%d", &x);
    if (x < 3) {
        x = menife(x);
    }else {
        fx = ostal(x);
    }
    printf("вот это %.3lf \n", fx);
    system("pause");
    return 0;
}