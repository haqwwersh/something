#include <stdio.h>

int main() {
    int N;
    double x;

    printf("x: ");
    scanf("%lf", &x);
    printf("N: ");
    scanf("%d", &N);

    double S = 1;     
    double fact = 1;  
    for (int i = 1; i <= N; i++) {
        fact *= i;   
        S += pow(x, i) / fact;
    }

    printf("S = %.3f\n", S);
    return 0;
}
