#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int st[SIZE];
int top = -1;
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    if (top == SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int i)
{
    if (isFull())
    {
        printf("\nstack OverFlow");
    }
    else
    {
        st[top] = i;
        top++;
    }
}
int pop()
{
    int k;
    if (isEmpty())
    {
        printf("\nstack UnderFlow");
    }
    else
    {
        k = st[top];
        top--;
    }
    return k;
}
void display()
{
    printf("\nstack : [ ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", st[i]);
    }
    printf("]\n");
}
int main()
{
    int c, e, rev[SIZE], i=top;

    while (1)
    {
        printf("stack operations : \n");
        printf("1.push\n2.pop\n3.display\n4.reverse stack elements\n5.exit");
        printf("\nenter choice : ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("\n enter element : ");
            scanf("%d", &e);
            push(e);
            break;
        case 2:
            e = pop();
            printf("\npoped element : ", e);
            break;
        case 3:
            display();
            break;
        case 4:
            while (top == -1)
            {
                rev[i] = pop();
                i--;
            }
            int sizer=(sizeof(rev)/sizeof(rev[0]));
            printf("\nstack : [ ");
            for (int i = 0; i <=sizer; i++)
            {
                printf("%d ", st[i]);
            }
            printf("]\n");
            break;

        case 5:
            exit(0);
        default:
            printf("\ninvalid input");
            break;
        }
    }

    return 0;
}