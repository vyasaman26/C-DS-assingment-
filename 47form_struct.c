#include <stdio.h>


struct Student {
    char name[100];
    int rollNo;
    char courseName[100];
};


void writeToFile(FILE *file, struct Student student) {
    fprintf(file, "Name: %s\n", student.name);
    fprintf(file, "Roll Number: %d\n", student.rollNo);
    fprintf(file, "Course Name: %s\n", student.courseName);
    fprintf(file, "\n");  
}


void displayFromFile(FILE *file) {
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  
    }
}

int main() {
    FILE *file;                 
    struct Student students[5];  

    
    file = fopen("student_info.txt", "w");

    
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;  
    }

    
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        
        printf("Enter name: ");
        getchar();  
        fgets(students[i].name, sizeof(students[i].name), stdin);  

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter course name: ");
        getchar();  
        fgets(students[i].courseName, sizeof(students[i].courseName), stdin); 

        
        writeToFile(file, students[i]);
    }

    
    fclose(file);

    
    file = fopen("student_info.txt", "r");

    
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;  
    }

    
    printf("\nStudent details from file:\n");
    displayFromFile(file);

    
    fclose(file);

    return 0;
}
