#include <stdio.h>
#include <math.h>

int main() {
    double a = 2.14, b = -4.21, c = 3.25;
    double x = -4.5;
    double x_end = -13.5;
    double h = 0.5;

    double y;
    double y_min, y_max;

    y = (a*x*x + b*x + c) * sin(x);
    y_min = y_max = y;

    x -= h;

    while (x >= x_end) {
        y = (a*x*x + b*x + c) * sin(x);

        if (y < y_min) y_min = y;
        if (y > y_max) y_max = y;

        x -= h;
    }

    printf("min = %.3f\n", y_min);
    printf("max = %.3f\n", y_max);

    return 0;
}
