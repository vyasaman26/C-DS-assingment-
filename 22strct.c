#include <stdio.h>

void stringConcat(char str1[], char str2[])
{
    int i = 0, j = 0;

    while (str1[i] != '\0')
    {
        i++;
    }

    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

int main()
{
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    stringConcat(str1, str2);

    printf("The concatenated string is: %s\n", str1);

    return 0;
}
