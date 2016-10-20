/*
Student Name:Milan Gahatraj
subject:Programming Fundamental
Roll no.:
Lab no.:
program:WAP to use of relational operator.
Date:2016-10-19
*/
#include<stdio.h>
int main(){
	int n1,n2;
	printf("enter first number:");
	scanf("%d",&n1);
	printf("enter second number:");
	scanf("%d",&n2);
	
	if(n1==n2){
		printf("\n%d is equal to %d",n1,n2);
	}
	
	else{
		printf("\n%d is not equal to %d",n1,n2);
	}
	if(n1>n2){
		printf("\n%d is greater than %d",n1,n2);
	}
	else{
		printf("\n%d is less than %d",n1,n2);
	}
	
	if(n1>=n2){
		printf("\n%d is greater than or equals to %d",n1,n2);
	}
	else{
		printf("\n%d is less than or equals to %d",n1,n2);
	}
	return 0;
}
	
