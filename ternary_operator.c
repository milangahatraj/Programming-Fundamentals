/*
Student Name:Milan Gahatraj
subject:Programming Fundamental
Roll no.:
Lab no.:
program:WAP to take three input from user and print largest and smallest numbers using terminary operator.
Date:2016-10-24
*/
#include<stdio.h>
//#include<conio.h>

int main(){
	int a,b,c;
	
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Enter third number:");
	scanf("%d",&c);
	
	(a>=b)?(a>b)?printf("%d is greater",a):printf("%d is greater",c):
	(b>=c)?printf("%d is greater",b):printf("%d is greater",c);
		
	return 0;
	}
	
	
	
