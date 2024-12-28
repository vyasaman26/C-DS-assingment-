#include <stdio.h>
#include <string.h>  

#define MAX_NAMES 10
#define MAX_LENGTH 50

int main() {
    char names[MAX_NAMES][MAX_LENGTH];  
    char temp[MAX_LENGTH];  
    int i, j;

    printf("Enter 10 names:\n");
    for (i = 0; i < MAX_NAMES; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);  
        size_t len = strlen(names[i]);
        if (names[i][len - 1] == '\n') {
            names[i][len - 1] = '\0';
        }
    }

    for (i = 0; i < MAX_NAMES - 1; i++) {
        for (j = i + 1; j < MAX_NAMES; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames in ascending order:\n");
    for (i = 0; i < MAX_NAMES; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
