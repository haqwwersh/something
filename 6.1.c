#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[20];
    int i;

    srand(time(NULL));

    for (i = 0; i < 20; i++) {
        a[i] = rand() % 21 - 10;
    }


    printf("array:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", a[i]);
    }

    printf("\n>0:\n");
    for (i = 0; i < 20; i++) {
        if (a[i] > 0) printf("%d ", a[i]);
    }

    printf("\n<0:\n");
    for (i = 0; i < 20; i++) {
        if (a[i] < 0) printf("%d ", a[i]);
    }

    return 0;
}
