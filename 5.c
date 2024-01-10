#include<stdio.h>

// Write a c program to two variable swap using all function.

void main (){
	int a,b;
	printf("Enter A :- ");
	scanf("%d", &a);
	printf("Enter B :- ");
	scanf("%d", &b);
	swap(&a, &b);
}

int swap(int *p, int *q){
	int c;
	c=*p;
	*p=*q;
	*q=c;
	
	printf("Value A :- %u\n",*p);
	printf("Value B :- %u\n",*q);
}
