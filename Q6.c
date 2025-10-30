#include<stdio.h>
void printstar()
{
    for(int i=1;i<=5;i++)
    {
        for(int space=5;space>i;space--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void printnumtri()
{
     for(int i=1;i<=5;i++)
    {
        for(int space=5;space>i;space--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
void printchartri()
{
    
     for(int i=1;i<=5;i++)
    {
        int character=65;
        for(int space=5;space>i;space--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%c",character);
            character++;
        }
        printf("\n");
    }
}
int main()
{
    printstar();
    printnumtri();
    printchartri();
    return 0;
}