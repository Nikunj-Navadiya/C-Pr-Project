#include<stdio.h>

//Write a c program to create program input 2 number which number is minimum find using switch case and using no return with perameter function.

void main (){
	int no1, no2;
	
	printf("Enter Number 1 :- ");
	scanf("%d", &no1);
	printf("Enter Number 2 :- ");
	scanf("%d", &no2);
	minimum(no1, no2);
}

int minimum(int a, int b) {
	switch(a<b){
		case 1 :
			printf("%d is minimum",a);
		break;
		case 0 :
			printf("%d is minimum",b);
		break;
		
	}
}
