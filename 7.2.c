#include <stdio.h>
#include <math.h>

int main() {
    double S = 0;
    for (int i = 1; i <= 25; i++) {
        S += sin(i);
    }
    printf("S = %.3f\n", S);
    return 0;
}
