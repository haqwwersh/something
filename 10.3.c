#include <stdio.h>
#include <string.h>

int main() {
    char text[200];
    char arr[50][50];
    int n = 0;

    printf("Enter: ");
    fgets(text, 200, stdin);

    char *word = strtok(text, ",");

    while (word != NULL) {
        while (*word == ' ') word++;
        strcpy(arr[n], word);
        n++;
        word = strtok(NULL, ",");
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1; j++)
            if (strcmp(arr[j], arr[j+1]) > 0) {
                char temp[50];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }

    printf("\nSorted:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);

    return 0;
}
