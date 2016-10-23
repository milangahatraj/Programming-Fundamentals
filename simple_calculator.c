/*
Student Name:Milan Gahatraj
subject:Programming Fundamental
Roll no.:
Lab no.:
program:WAP to use of assignment operator.
Date:2016-10-23
*/
#include<stdio.h>
//#include<conio.h>
int main(){
	int a,b,result;
	char o;
	printf("\nFirst Number:");
	scanf("%d",&a);
	
	printf("\nSecond Number:");
	scanf("%d",&b);
	printf("\nSelect an operator(+,-,*,/,%)");
	scanf("%c",&o);
	o=getchar();
	
	
	switch(o){
		case'+':
			result=a+b;
				printf("The sum of two numbner is:%d",result);
				break;
				
		case'-':
			result=a-b;
			printf("The difference of two numbner is:%d",result);
			
				break;
				
		case'*':
			result=a*b;
				printf("The multiplication of two numbner is:%d",result);
				break;
				
		case'/':
			result=a/b;
				printf("The division of two numbner is:%d",result);
				break;
				
		case'%':
			result=a%b;
				printf("The modulus of two numbner is:%d",result);
				break;
		default:
			printf("\nChoose valid operator");
		}
		
		return 0;
	}
			
		
	
