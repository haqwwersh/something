// 1. f(x)=x2/(10+x3);                                       a=-2; b=5;
// 2. f(x)=(2.5x2-0.1)/(tg x+sin x);                   a=4; b=6;
// 3. f(x)=(x+1)2√lg x;                                      a=2; b=10;
// 4. f(x)=x2 ln x /(1+x)2;                                  a=1; b=20;
// 5. f(x)=1/((0.5+0.1x3)√x);                             a=0.1; b=2.1;
// 6. f(x)=x 2√(2+3x)3;                                       a=0.5; b=2.5;
// 7. f(x)=1/√(0.02+0.01x);                               a=1; b=30;
// 8. f(x)=(1+2x+x2)/(5+2x2);                            a=-2; b=2;
// 9. f(x)=(2x+lg x)/(1+lg x);                             a=1; b=10;
// 10. f(x)=√(2+x)3/x2;                                       a=0.2; b=10;
// 11. f(x)=(1+x2)/(x3+√(1+x));                          a=0.5; b=5;
// 12. f(x)=(1-x) lg x/√(1-lg x);                          a=2; b=7; 


#include <stdio.h>
#include <math.h>

double f(double x) {
    return x*x / (10 + x*x*x);
}

double trapezoid(double a[], int N, double h) {
    double sum = 0;

    sum += a[0] / 2.0;
    for (int i = 1; i < N; i++)
        sum += a[i];
    sum += a[N] / 2.0;

    return sum * h;
}

double simpson(double a[], int N, double h) {
    double sum = a[0] + a[N];

    double sum4 = 0, sum2 = 0;

    for (int i = 1; i < N; i++) {
        if (i % 2 == 1)
            sum4 += a[i];
        else
            sum2 += a[i];
    }

    return (h / 3.0) * (sum + 4 * sum4 + 2 * sum2);
}

int main() {
    double a = -2, b = 5;
    int Ns[3] = {10, 100, 1000};

    for (int t = 0; t < 3; t++) {
        int N = Ns[t];
        double h = (b - a) / N;

        double A[N+1];

        for (int i = 0; i <= N; i++) {
            double x = a + i * h;
            A[i] = f(x);
        }

        double I1 = trapezoid(A, N, h);
        double I2 = simpson(A, N, h);

        printf("\nN = %d\n", N);
        printf("trapezoid:   %lf\n", I1);
        printf("simpson:   %lf\n", I2);
        printf("difference: %lf\n", fabs(I1 - I2));
    }

    return 0;
}
