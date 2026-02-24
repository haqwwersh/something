#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, p;
    
    printf("Введите число n: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("нет\n");
        return 1;
    }
    
    int *arr = (int*)malloc((n + 1) * sizeof(int));
    if (arr == NULL) {
        printf("ошибка\n");
        return 1;
    }
    
    for (i = 0; i <= n; i++) {
        arr[i] = 1;
    }
    
    arr[0] = 0;
    arr[1] = 0;
    
    for (p = 2; p * p <= n; p++) {
        if (arr[p] == 1) {
            for (i = p * p; i <= n; i = i + p) {
                arr[i] = 0;
            }
        }
    }
    
    printf("\nПростые числа от 2 до %d:\n", n);
    int count = 0;
    for (i = 2; i <= n; i++) {
        if (arr[i] == 1) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    printf("Всего простых чисел: %d\n", count);
    
    free(arr);
    
    return 0;
}
