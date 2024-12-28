#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[1000];  
    int count = 0;  
    int i = 0;

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);  

    while (str[i] != '\0') {
        if (isspace(str[i])) {
            i++;
            continue;
        }

        count++;

        while (str[i] != '\0' && !isspace(str[i])) {
            i++;
        }
    }

    printf("Total number of words: %d\n", count);

    return 0;
}
