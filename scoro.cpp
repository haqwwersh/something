#include <cstdio>
#include <cstdlib>
#include <ctime>

int main() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    float* a = new float[n];
    float** b = new float*[n];
    
    srand(time(0));
    printf("Исходный массив:\n");
    for (int i = 0; i < n; i++) {
        a[i] = (float)rand() / RAND_MAX;
        printf("%.3f ", a[i]);
    }
    printf("\n");
    
    for (int i = 0; i < n; i++) {
        b[i] = &a[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*b[j] > *b[j + 1]) {
                float* temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    
    printf("Отсортированный массив:\n");
    for (int i = 0; i < n; i++) {
        printf("%.3f ", *b[i]);
    }
    printf("\n");
    
    printf("Исходный массив (проверка):\n");
    for (int i = 0; i < n; i++) {
        printf("%.3f ", a[i]);
    }
    printf("\n");
    
    delete[] a;
    delete[] b;
    
    return 0;
}