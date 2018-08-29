//to find all possible path in 2d array of any finish point if only movement can be right and down
//
#include<stdio.h>
int rowCount=3;
int colCount=3;
int main(){
int a[3][3] = {{ 1, 2, 3 }, { 4, 5, 6 },{7,8,9} };
printAll(a,0,0,5);

	}

	void printAll(int **arrA,int currentRow, int currentColumn) {
	    char path[6];
	    int i,j;
		if (currentRow == rowCount - 1) {
			for (i = currentColumn; i < colCount; i++) {
				path += " " + arrA[currentRow][i];
			}
			printf("%s",path);
			return ;
		}
		if (currentColumn == colCount - 1) {
			for (i = currentRow; i <= rowCount - 1; i++) {
				path += " " + arrA[i][currentColumn];
			}
			printf("%s",path);
			return;
		}
		path = path + " " + arrA[currentRow][currentColumn];
		printAll(currentRow + 1, currentColumn, path);
		printAll(currentRow, currentColumn + 1, path);
	//	printAll(currentRow + 1, currentColumn + 1, path);//fr diagonal
	}
