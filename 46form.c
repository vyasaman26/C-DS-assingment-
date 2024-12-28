#include <stdio.h>

struct Student
{
    char name[100];
    int rollNo;
    float courseFee;
};

void writeToFile(FILE *file, struct Student student)
{
    fprintf(file, "Name: %s\n", student.name);
    fprintf(file, "Roll Number: %d\n", student.rollNo);
    fprintf(file, "Course Fee: %.2f\n", student.courseFee);
    fprintf(file, "\n");
}

void displayFromFile(FILE *file)
{
    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }
}

int main()
{
    FILE *file;
    struct Student student;

    file = fopen("student_info.txt", "w");

    if (file == NULL)
    {
        printf("Could not open file for writing.\n");
        return 1;
    }

    printf("Enter student name: ");
    getchar();
    fgets(student.name, sizeof(student.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNo);

    printf("Enter course fee: ");
    scanf("%f", &student.courseFee);

    writeToFile(file, student);

    fclose(file);

    file = fopen("student_info.txt", "r");

    if (file == NULL)
    {
        printf("Could not open file for reading.\n");
        return 1;
    }

    printf("\nStudent details from file:\n");
    displayFromFile(file);

    fclose(file);

    return 0;
}
