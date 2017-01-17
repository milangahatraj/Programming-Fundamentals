#include<stdio.h>
#include<math.h>
int cube()
{
	int n,c;
	printf("Enter any number:");
	scanf("%d",&n);
	c=n*n*n;
	printf("The cube of number is:%d",c);
	
	return 0;
}
int main()
{
	cube();
	return 0;
}
