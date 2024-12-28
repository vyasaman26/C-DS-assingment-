#include <stdio.h>

int main()
{
    FILE *sourceFile, *destFile;
    char ch;

    char sourceFilename[100], destFilename[100];

    printf("Enter the name of the source file: ");
    scanf("%s", sourceFilename);

    printf("Enter the name of the destination file: ");
    scanf("%s", destFilename);

    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL)
    {
        printf("Could not open the source file %s for reading.\n", sourceFilename);
        return 1;
    }

    destFile = fopen(destFilename, "w");
    if (destFile == NULL)
    {
        printf("Could not open the destination file %s for writing.\n", destFilename);
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("Content has been copied from '%s' to '%s'.\n", sourceFilename, destFilename);

    return 0;
}
