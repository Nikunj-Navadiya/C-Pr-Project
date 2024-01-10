#include<stdio.h>

//Write a c program to create two matrix sum in each rows using no return with perameter function.

void main(){
	int i,j,s;
	
	for(i=1; i<=5; i++){
		for(s=2; s<=i; s++){
			printf("  ");
		}
			for(j=i; j<=5; j++){
			printf("%d ",j);
		}
		printf("\n");
	}	
}
