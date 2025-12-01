#include <stdio.h>
#include <math.h>

int main() {
    int N;
    printf("N: ");
    scanf("%d", &N);

    double S = 0;
    for (int i = 1; i <= N; i++) {
        S += tan(i * 2);
    }

    printf("S = %.0f\n", S);
    return 0;
}
