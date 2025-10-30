#include<stdio.h>
void printstarpyr()
{
    for(int i=1;i<=5;i++)
    {
        for(int space=1;space<=5-i;space++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void printnumpry()
{
     for(int i=1;i<=5;i++)
    {
        for(int space=1;space<=5-i;space++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i)-1;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
void printcharpyr()
{
     for(int i=1;i<=5;i++)
    {
        int character=65;
        for(int space=1;space<=5-i;space++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i)-1;j++)
        {
            printf("%c",character);
            character++;
        }
        printf("\n");
    }
}
int main()
{
    printstarpyr();
    printnumpry();
    printcharpyr();
}