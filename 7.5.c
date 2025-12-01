#include <stdio.h>
#include <math.h>

int main() {
    double x = 1;
    double S = 0;

    double a = 0.18;

    for (int i = 1; i <= 10; i++) {
        S += pow(a * x, i);
        a += 0.02;
    }

    printf("S = %.3f\n", S);
    return 0;
}
