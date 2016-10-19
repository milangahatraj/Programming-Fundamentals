/*
 Student Name:Milan Gahatraj
 Subject:Programming Fundamentals
 Roll no:
 Lab no:
 Program:Write a program to use bitwise operator.
		1)AND(^)
		2)OR(|)
		3)COMPLEMENT(~)
 Date:2016/10/19
*/
#include<stdio.h>
	int main(){
		int a,b;
		printf("Enter the First Number:");
		scanf("%d",&a);
		printf("Enter the Second Number:");
		scanf("%d",&b);
		
		printf("\nuse of AND operator(a AND b)=%d",a&b);
		printf("\nuse of OR operator(a OR b)=%d",a|b);
		printf("\nuse of complement(~a):%d",~a);
		printf("\nuse of complement(~b):%d",~b);
		printf("\nuse of XOR(a^b):%d",a^b);
		
	return 0;
	}
		


