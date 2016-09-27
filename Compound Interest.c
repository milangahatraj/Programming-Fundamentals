/*
Student Name:Milan Gahatraj
Subject:Programming Fundamentals
Lab no:05
Program:
Date:2016/09/27
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float principal,rate,time, compound_Interest;
	printf("Enter the value of princial");
	scanf("%f",&principal);
	printf("Enter the value of rate");
	scanf("%f",&rate);
	printf("Enter the value of time:");
	scanf("%f",&time);
	compound_Interest = principal*pow(1+0.01*rate,time)-1;
	printf("The compound interest is:%f",compound_Interest);
	getch();
	
	
}
