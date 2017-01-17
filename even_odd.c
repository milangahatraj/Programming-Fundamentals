#include<stdio.h>
int evenodd(int n);
int main()
{
int n,result;
printf("Enter any number:");
scanf("%d",&n);
result=evenodd(n);
printf("%d",result);
}
int evenodd(int n)
{
	if(n%2==0)
	{
		printf("%d is even",n);
	}
	else
	{
		printf("%d is odd",n);
	}
return 0;
}
