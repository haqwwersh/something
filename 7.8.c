#include <stdio.h>

int main() {
    long long P = 1;
    for (int i = 2; i <= 12; i += 2) {
        P *= i;
    }
    printf("P = %lld\n", P);
    return 0;
}
