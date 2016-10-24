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
#include<stdlib.h>
int main(){
	int a,b,result;
	int o;
	m:
	printf("\n\t*SIMPLE CALCULATOR*");
	printf("\n\t*Select 1 for Addition.\t*");
	printf("\n\t*Select 2 for Subtraction.\t*");
	printf("\n\t*Select 3 for Multiplication.\t*");
	printf("\n\t*Select 4 for Division.\t");
	
	printf("\n\tEnter selective number:");
	scanf("%d",&o);
	printf("\n\tFirst Number:");
	scanf("%d",&a);
	
	printf("\n\tSecond Number:");
	scanf("%d",&b);
	
	//o=getchar();
	
	
	switch(o){
		case'+': case'1':
			result=a+b;
				printf("\n\tThe sum of two numbner is:%d",result);
				break;
				
		case'-': case'2':
			result=a-b;
			printf("\n\tThe difference of two numbner is:%d",result);
			
				break;
				
		case'*': case'3':
			result=a*b;
				printf("\n\tThe multiplication of two numbner is:%d",result);
				break;
				
		case'/': case'4':
			result=a/b;
				printf("\n\tThe division of two numbner is:%d",result);
				break;
				
		case'%':
			result=a%b;
				printf("\n\tThe modulus of two numbner is:%d",result);
				break;
		case 0:
			exit (0);
		default:
			printf("\n\tChoose valid operator");
		}
		goto m;
		
		return 0;
	}
			
		
	
