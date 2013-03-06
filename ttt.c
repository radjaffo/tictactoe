/*Jeff Dickason  - Dickasongaming@gmail.com
Random function program tic tac toe w/ ai movements.
*/


	#include <stdio.h>
void pg								//map function
(int arrayMap[][3], int numRows){
int i,j;
for ( i=0; i<numRows;i++,printf("\n")){
	for (j=0; j <3;j++)
		printf ("%d ",arrayMap[i][j]);
	printf ("\n");
	}
	}
	

int main() {

	int tableA [3][3] = {{1,2,3},{4,5,6},{7,8,9}};	// define table
	pg(tableA,3);
	return 0;
	}// main
