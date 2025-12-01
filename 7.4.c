#include <stdio.h>
#include <math.h>

int main() {
    double S = 0;
    for (double x = 0.1; x <= 1.9; x += 0.2) {
        S += log(x);
    }
    printf("S = %.3f\n", S);
    return 0;
}
