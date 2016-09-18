/*
Student Name:Milan Gahatraj
Subject:Programming Fundamentals
Roll no:
Program:WAP to print surface and volume of sphere.
Lab no:01
Date:18th september 2016
*/
#include<stdio.h>
#include<conio.h>
void main(){
	float r,s,v;
	printf("Enter the radius of sphere");
	scanf("%f",&r);
	s = 4*3.14*r*r;
	printf("The surface of sphere is:%f",s);
	v = (4/3)*3.14*r*r*r;
	printf("The volume of sphere is:%f",v);
	getch();
}