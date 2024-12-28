#include <stdio.h>

char *strchr_custom(char str[], char ch)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            return &str[i];
        }
        i++;
    }
    return NULL;
}

int main()
{
    char str[100], ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }

    printf("Enter a character to search for: ");
    scanf("%c", &ch);
    char *result = strchr_custom(str, ch);

    if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}
