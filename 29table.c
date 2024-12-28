#include <stdio.h>
#include <stdlib.h>
struct student
{
    int eno;
    char name[10];
    int m1;
    int m2;
    int m3;
    float result;
};

int main()
{
    
    struct student e[2];
    for (int i = 0; i < 2; i++)
    {
        printf("enter e.no.:");
        scanf("%d", &e[i].eno);
        fflush(stdin);
        printf("enter name : ");
        gets(e[i].name);
        printf("enter marks for hindi:");
        scanf("%d", &e[i].m1);
        printf("enter marks for english:");
        scanf("%d", &e[i].m2);
        printf("enter marks for maths:");
        scanf("%d", &e[i].m3);
    }
    printf("e.no\tname\thindi\teng\tmaths\tresult\n------------------------------------------\n");
    
    for (int i = 0; i < 2; i++)
    {
        e[i].result=((e[i].m1+e[i].m2+e[i].m3)/300.0*100);
        printf("%d\t%s\t%d\t%d\t%d\t%.2f\n",e[i].eno,e[i].name,e[i].m1,e[i].m2,e[i].m3,e[i].result);
    }

    return 0;
}