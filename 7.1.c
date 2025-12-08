#include <stdio.h>
#include <math.h>

int main() {
    double a = 2.14, b = -4.21, c = 3.25;
    double x = -4.5;
    double y[60];
    int n = 0;

    while (x >= -33.5) {
        y[n] = a * x * x * sin(x) + b * x + c;
        x -= 0.5;
        n++;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (y[j] < y[j + 1]) {
                double temp = y[j];
                y[j] = y[j + 1];
                y[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%.3lf\n", y[i]);

    return 0;
}
