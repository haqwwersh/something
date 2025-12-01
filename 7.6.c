#include <stdio.h>

int main() {
    int N;
    printf("N: ");
    scanf("%d", &N);

    int S = 0;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            S -= i;
        else
            S += i;
    }

    printf("S = %d\n", S);
    return 0;
}
