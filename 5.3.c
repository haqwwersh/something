#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("n: ");
    scanf("%d", &n);

    int count = 0;

    int num = 2;
    while (num <= n) {
        int prime = 1;

        int i = 2;
        while (i <= sqrt(num)) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
            i++;
        }

        if (prime) {
            printf("%d ", num);
            count++;
        }

        num++;
    }

    printf("\n%d\n", count);

    return 0;
}
