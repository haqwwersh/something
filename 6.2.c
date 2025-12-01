#include <stdio.h>

long long fact(int x) {
    long long f = 1;
    for (int i = 1; i <= x; i++) f *= i;
    return f;
}

int main() {
    int n;
    printf("n: ");
    scanf("%d", &n);

    long long C[n+1];

    for (int i = 1; i <= n; i++) {
        C[i] = fact(n) / (fact(i) * fact(n - i));
    }

    printf(":\n");
    for (int i = 1; i <= n; i++) {
        printf("%lld ", C[i]);
    }

    return 0;
}
