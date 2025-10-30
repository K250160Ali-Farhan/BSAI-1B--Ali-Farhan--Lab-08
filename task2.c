#include<stdio.h>
int main()
{
	int arr[3][3];
	int i,j,max;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter array:");
			scanf("%d",&arr[i][j]);
		}
	}
	max=arr[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
			}
		}
	}
	printf("\nMax = %d",max);
	return 0;
}
