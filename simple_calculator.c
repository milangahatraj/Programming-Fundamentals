/*
Student Name:Milan Gahatraj
subject:Programming Fundamental
Roll no.:
Lab no.:
program:WAP to make simple calculator:
			a)using switch case.
			*b)break
Date:2016-10-23
*/
#include<stdio.h>
//#include<conio.h>
int main(){
	int a,b,result;
	char o;
	printf("\nSelect an operator(+,-,*,/,%%)");
	scanf("%c",&o);
	printf("\nFirst Number:");
	scanf("%d",&a);
	
	printf("\nSecond Number:");
	scanf("%d",&b);
	
	//o=getchar();
	
	
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
			
		
	
