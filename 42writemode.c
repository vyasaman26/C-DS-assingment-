#include <stdio.h>

int main() {
    FILE *file;         
    char filename[100]; 
    char data[100];     

    
    printf("Enter the name of the file to write to: ");
    scanf("%s", filename);

    
    file = fopen(filename, "w");

    
    if (file == NULL) {
        printf("Could not open the file %s for writing.\n", filename);
        return 1;  
    }

    
    printf("Enter the data to write to the file:\n");
    getchar();  
    fgets(data, sizeof(data), stdin); 

    
    fprintf(file, "%s", data);

    
    fclose(file);

    printf("Data has been written to the file '%s'.\n", filename);

    return 0;
}
