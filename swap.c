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
	int n1,n2,temp;
	printf("\nBefore swap");
	printf("\nEnter First Number:");
	scanf("%d",&n1);
	printf("Enter Second Number:");
	scanf("%d",&n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("\nAfter swap");
	
	printf("\nfirst number:%d",n1);
	printf("\nsecond number:%d",n2);
	return 0;
}
	
	
