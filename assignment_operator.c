/*
Student Name:Milan Gahatraj
subject:Programming Fundamental
Roll no.:
Lab no.:
program:WAP to use of assignment operator.
Date:2016-10-19
*/
#include<stdio.h>
int main(){
	int n1,n2;
	printf("Enter First number:");
	scanf("%d",&n1);
	printf("Enter Second number:");
	scanf("%d",&n2);
	
	n1+=n2;
	printf("\nuse of '+=' operator:%d",n1);
	
	n1-=n2;
	printf("\nuse of '-=' operator:%d",n1);
	
	n1*=n2;
	printf("\nuse of '*=' operator:%d",n1);
	
	n1/=n2;
	printf("\nuse of '/=' operator:%d",n1);
	
	n1%=n2;
	printf("\nuse of '%=' operator:%d",n1);
	
	n1=n2;
	printf("\nuse of '=' operator:%d",n1);
	return 0;
}
	
	
