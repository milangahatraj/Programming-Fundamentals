/*
Student Name:Milan Gahatraj
Subject:Programming Fundamentals
Roll no:
Program:WAP to print area of trapezium.
Lab no:01
Date:18th september 2016
*/
#include<stdio.h>
#include<conio.h>
void main(){
	float l,b,h,area;
	printf("Enter the length of trapezium: ");
	scanf("%f",&l);
	printf("Enter the base of trapezium: ");
	scanf("%f",&b);
	printf("Enter the height of trapezium:");
	scanf("%f",&h);
	area=0.5*(l+b)*h;
	printf("The area of trapezium is:%f",area);
	getch();
}