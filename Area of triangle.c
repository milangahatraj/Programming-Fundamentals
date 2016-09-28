/* 
Students's Name:Milan Gahatraj
Subject: Programming Fundamental
Roll:
Program: WAP to read three sode of triangle to calculate area A=[s(s-a)(s-b)(s-c)]^0.5
s=(a+b+c)/2
Lab no.:007
Date:2016/9/28
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int	 main(){
	float a,b,c,s,area;
	printf("The value of first side is:");
	scanf("%f",&a);
	printf("The value of second side is:");
	scanf("%f",&b);
	printf("The value of third side is:");
	scanf("%f",&c);
	s=(a+b+c)/2;
	printf("The value of s is:%f",s);
	area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
	printf("\nThe area of triangle is:%f",area);
	getch();
	
	

}
