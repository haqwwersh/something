#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, m = 0, k = 0;
    printf("Введите размер: ");
    scanf("%d", &n);

    int *b = malloc(n * sizeof(int));
    srand(time(NULL));

    for (i = 0; i < n; i++) {
        b[i] = rand() % 101 - 50;
        printf("%d ", b[i]);
        if (b[i] > 0) m++;
        if (b[i] < 0) k++;
    }
    printf("\n");

    int *c = malloc(m * sizeof(int));
    int *d = malloc(k * sizeof(int));

    int ci = 0, di = 0;
    for (i = 0; i < n; i++) {
        if (b[i] > 0) c[ci++] = b[i];
        if (b[i] < 0) d[di++] = b[i];
    }

    printf("Положительные: ");
    for (i = 0; i < m; i++) printf("%d ", c[i]);
    printf("\nОтрицательные: ");
    for (i = 0; i < k; i++) printf("%d ", d[i]);
    printf("\n");

    free(b); free(c); free(d);
    return 0;
}