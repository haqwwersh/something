#include <stdio.h>

int main() {
    int M;
    printf("M: ");
    scanf("%d", &M);

    long long P = 1;

    for (int i = 1; i <= M; i++) {
        P *= i;
    }

    printf("P = %lld\n", P);
    return 0;
}
