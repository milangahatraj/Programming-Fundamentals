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
	float a,b,c,d,sqroot,sqroot2;
	printf("Enter the value of a:");
	scanf("%f",&a);
	printf("Enter the value of b:");
	scanf("%f",&b);
	printf("Enter the value of c:");
	scanf("%f",&c);
	d=pow(b,2)-(4*a*c);
	printf("Discriminant:%f",d);
	sqroot=(-b-pow(d,0.5))/2*a;
    sqroot2=(-b+pow(d,0.5))/2*a;
	printf("\nThe  sqroot of  is:%f",sqroot);
	printf("\nThe  sqroot2 of  is:%f",sqroot2);
	
	getch();
}