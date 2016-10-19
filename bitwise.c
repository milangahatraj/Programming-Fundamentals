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
		
		printf("\na and b=%d",a&b);
		printf("\na or b=%d",a|b);
		printf("\na complement:%d",~a);
		printf("\nb complement:%d",~b);
		
		return 0;
	}
		


