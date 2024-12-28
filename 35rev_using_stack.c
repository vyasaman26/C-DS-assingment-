#include <stdio.h>
#include <string.h>  

#define MAX 100  

void reverseString(char str[]) {
    char stack[MAX];  
    int top = -1;  
    int length = strlen(str);

    
    for (int i = 0; i < length; i++) {
        stack[++top] = str[i];  
    }

    
    for (int i = 0; i < length; i++) {
        str[i] = stack[top--];  
    }
}

int main() {
    char str[MAX];  

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    str[strcspn(str, "\n")] = '\0';  

    
    reverseString(str);

    
    printf("Reversed string: %s\n", str);

    return 0;
}
