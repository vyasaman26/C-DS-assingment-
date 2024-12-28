#include <stdio.h>

void stringCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
}

int main() {
    char str1[100], str2[100];

    printf("Enter the string to copy: ");
    scanf("%s", str1);

    stringCopy(str2, str1);

    printf("The copied string is: %s\n", str2);

    return 0;
}
