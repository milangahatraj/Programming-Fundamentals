/*
Student Name:Milan Gahatraj
subject:Programming Fundamental
Roll no.:
Lab no.:
program:WAP to use logical operator.
Date:2016-10-19
*/
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter First number:");
	scanf("%d",&a);
	printf("Enter Second number:");
	scanf("%d",&b);
	
	
	printf("\nuse of '==' operator:");
	printf("\n%d %d is %d",a,b,a==b);
	
	printf("\nuse of '>' operator:");
	printf("\n%d %d is %d",a,b,a>b);
	
	printf("\nuse of '<' operator:");
	printf("\n%d %d is %d",a,b,a<b);
	
	printf("\nuse of '!=' operator:");
	printf("\n%d %d is %d",a,b,a!=b);
	
	printf("\nuse of '>=' operator:");
	printf("\n%d %d is %d",a,b,a>=b);
	
	
	printf("\nuse of '<=' operator:");
	printf("\n%d %d is %d",a,b,a<=b);
	return 0;
	}
	
