#include<stdio.h>

//Write a c program to create array a[50] = {10,20,30,45,50} and 45 value change in 40 value

void main (){
	int a[50] = {10,20,30,45,50},value=40,po,i;
	
	
	
	for(i=0; i<5; i++){
		a[3]=value;
		printf("a[%d] :- %d\n", i, a[i]);
	}
	
	printf("\n");
}
