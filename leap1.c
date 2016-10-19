/*
 Student Name:Milan Gahatraj
 Subject:Programming Fundamentals
 Roll no:
 Lab no:
 Program:
 Date:2016/10/19
*/
#include<stdio.h>
int main(){
	int year;
	printf("Whether the year is leap year or not");
	printf("\nEnter year:");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 && year%400==0){
		printf("The year is leap year");
		}
	
	else{
		printf("The year is not leap year");
		}
	}
