#include<stdio.h>
int minimum();
int main()
{
	int result;
	result=minimum();
	printf("The smalller number is:%d",result);
}
int minimum()
{
int a,b;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
if(a<b)
{
	return a;
}
else
{
	return b;
}

}
