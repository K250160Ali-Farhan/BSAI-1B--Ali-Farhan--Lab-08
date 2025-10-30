#include<stdio.h>
int main()
{
    char seats[5][5];
    int i,j;
    int countx=0;
    int counto=0;
    int countdesks=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {   
            countdesks++;
            if(i==0||i%2==0)
            {
                if(j==0||j%2==0)
                {
                    seats[i][j]='X';
                    countx++;
                }
                else
                {
                    seats[i][j]='O';
                    counto++;
                }
            }
            else if(i==1||i%2!=0)
            {
                if(j==0||j%2==0)
                {
                    seats[i][j]='O';
                    counto++;
                }
                else
                {
                    seats[i][j]='X';
                    countx++;
                }
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("Row %d",i+1);
        for(j=0;j<5;j++)
        {
            printf("%4c",seats[i][j]);
        }
        printf("\n");
    }
    printf("\nSummary:\n=======");
    printf("\nStudents Seated: %d",countx);
    printf("\nEmpty Desks: %d",counto);
    printf("\nTotal Desks: %d",countdesks);
    return 0;

}
