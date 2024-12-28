#include <stdio.h>

void strlwr_custom(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main()
{
    char str[100];

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

    strlwr_custom(str);

    printf("String in lowercase: %s\n", str);

    return 0;
}
