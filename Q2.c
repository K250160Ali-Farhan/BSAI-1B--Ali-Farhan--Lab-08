#include <stdio.h>
int main(){
	int matrix[2][2] = {
	{1,2},
	{4,5}
};
	int matrix2[2][2] = {
	{2,3},
	{5,6}
};
	
int rows, cols;
for(rows = 0; rows<2; rows++){
	for(cols = 0; cols<2; cols++){
		printf("%d  ", matrix[rows][cols]);
	}
	printf("\n");
}	

printf("\n");
for(rows = 0; rows<2; rows++){
	for(cols = 0; cols<2; cols++){
		printf("%d  ", matrix2[rows][cols]);
	}
	printf("\n");
}	

printf("\n");
printf("Addition\n");
int addMatrix[2][2];
for(rows = 0; rows<2; rows++){
	for(cols = 0; cols<2; cols++){
		int firstElem = matrix[rows][cols];
		int secondElem = matrix2[rows][cols];
		addMatrix[rows][cols] = firstElem + secondElem;
	}
}
for(rows = 0; rows<2; rows++){
	for(cols = 0; cols<2; cols++){
		printf("%d  ", addMatrix[rows][cols]);
	}
	printf("\n");
}

printf("\n");

//	Largest elem in the addition array
	int largest = 0;
	for(rows = 0; rows<2; rows++){
		for(cols = 0; cols<2; cols++){
			if(addMatrix[rows][cols]>largest){
				largest = addMatrix[rows][cols];
			}
		}
	}
	
	printf("The largest element in the addition array = %d",largest);

	
	return 0;
}
