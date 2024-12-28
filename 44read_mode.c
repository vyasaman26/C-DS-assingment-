#include <stdio.h>

int main() {
    FILE *file;        
    char ch;           
    char filename[100]; 

    
    printf("Enter the name of the file to open: ");
    scanf("%s", filename);

    
    file = fopen(filename, "r");

    
    if (file == NULL) {
        printf("Could not open the file %s for reading.\n", filename);
        return 1;  
    }

    
    printf("\nContents of the file '%s' are:\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  
    }

    
    fclose(file);

    return 0;
}
