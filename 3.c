#include <stdio.h>

int main() {
    int year;
    int animal;

    printf("Enter year: ");
    scanf("%d", &year);

    animal = (year - 2008) % 12;
    if (animal < 0) animal += 12;

    switch (animal) {
        case 0:  printf("Rat\n"); break;
        case 1:  printf("Cow\n"); break;
        case 2:  printf("Tiger\n"); break;
        case 3:  printf("Rabbit\n"); break;
        case 4:  printf("Dragon\n"); break;
        case 5:  printf("Snake\n"); break;
        case 6:  printf("Horse\n"); break;
        case 7:  printf("Ship\n"); break;
        case 8:  printf("Monkey\n"); break;
        case 9:  printf("Rooster\n"); break;
        case 10: printf("Dog\n"); break;
        case 11: printf("Pig\n"); break;
    }

    return 0;
}
