/*
Student Name:Milan Gahatraj
Subject:Programming Fundamentals
Roll no:
Program:WAP to print square of any numbers.
Lab no:01
Date:18th september 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	float a,square,sqroot;
	printf("Enter any number:");
	scanf("%f",&a);
	square =pow(a,2);
	printf("The square of number is:%f",square);
	sqroot = sqrt(a);
	printf("\n The sqroot is:%f",sqroot);
	getch();
}