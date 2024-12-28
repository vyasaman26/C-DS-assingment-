#include <stdio.h>
#include <stdlib.h> 

void swapStrings(char *str1, char *str2) {
    char *temp;  

    temp = (char *)calloc(100, sizeof(char));  

    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        temp[i] = str1[i];
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        str1[i] = str2[i];
    }

    for (int i = 0; temp[i] != '\0'; i++) {
        str2[i] = temp[i];
    }

    free(temp);
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);  

    int len = 0;
    while (str1[len] != '\0') {
        len++;
    }
    if (str1[len - 1] == '\n') {
        str1[len - 1] = '\0';
    }

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);  

    len = 0;
    while (str2[len] != '\0') {
        len++;
    }
    if (str2[len - 1] == '\n') {
        str2[len - 1] = '\0';
    }

    printf("\nBefore swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    swapStrings(str1, str2);

    printf("\nAfter swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    return 0;
}
