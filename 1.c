#include<stdio.h>

// Write a c program to create two matrix sum in each rows using no return with perameter function.

void main (){
	int a[50][50],b[50][50], i, j, row, col;
	
	printf("A Matrices\n");
	printf("Enter of Row :- ");
	scanf("%d",&row);
	printf("Enter of Colum :- ");
	scanf("%d",&col);
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nB Matrices\n");
	printf("Enter of Row :- ");
	scanf("%d",&row);
	printf("Enter of Colum :- ");
	scanf("%d",&col);
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("b[%d][%d] :- ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nSum of Two Matrices\n");
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d ", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	
}
