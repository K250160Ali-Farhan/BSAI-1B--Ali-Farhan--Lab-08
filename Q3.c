#include <stdio.h>
int main(){
	char seatingArrangement[5][5] = {
	{'x','o','x','o','x'},
	{'o','x','o','x','o'},
	{'x','o','x','o','x'},
	{'o','x','o','x','o'},
	{'x','o','x','o','x'},
	};
	
//	o = empty, x = filled
int rows,cols;
int crossCount = 0;
int dotCount = 0;
for(rows = 0; rows<5; rows++){
	printf("Row %d     ", rows);
	for(cols = 0; cols<5; cols++){
		if (seatingArrangement[rows][cols]=='x'){
			crossCount++;
		}
		else{
			dotCount++;
		}
		printf("%c ", seatingArrangement[rows][cols]);
	}
	printf("\n");
}
printf("\n");
printf("Seats Filled = %d\n", crossCount);
printf("Seats Empty = %d\n", dotCount);
printf("Total Seats = %d\n", crossCount+dotCount);


	return 0;
}
