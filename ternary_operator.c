/*
Student Name:Milan Gahatraj
subject:Programming Fundamental
Roll no.:
Lab no.:
program:WAP to take two input from user and print largest and smallest numbers using terminary operator.
Date:2016-10-24
*/
#include<stdio.h>
//#include<conio.h>

int main(){
	int a,b,largest,smallest;
	
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	
	scanf("%d",&b);
	(a>b)?printf("%d is largest and %d is smaller",a,b):printf("%d is largest and %d is smaller",b,a);
	return 0;
	}
	
	
	
