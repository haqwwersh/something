#include <stdio.h>
#include <math.h>

int main() {
    double eps = 0.00001;
    double sum = 0.0;
    double term;
    int k = 0;

    do {
        term = pow(-1, k) / (2.0 * k + 1.0);  
        sum += term;
        k++;
    } while (fabs(term) >= eps);

    double pi = 4 * sum;

    printf("Pi = %.6f\n", pi);
    return 0;
}
