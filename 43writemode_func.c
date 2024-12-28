#include <stdio.h>


void writeToFile(char *filename, char *data) {
    FILE *file = fopen(filename, "w"); 

    
    if (file == NULL) {
        printf("Could not open the file %s for writing.\n", filename);
        return;  
    }

    
    fprintf(file, "%s", data);

    
    fclose(file);

    printf("Data has been successfully written to the file '%s'.\n", filename);
}

int main() {
    char filename[100]; 
    char data[200];     

    
    printf("Enter the name of the file to write to: ");
    scanf("%s", filename);

    
    printf("Enter the data to write to the file:\n");
    getchar();  
    fgets(data, sizeof(data), stdin); 

    
    writeToFile(filename, data);

    return 0;
}
