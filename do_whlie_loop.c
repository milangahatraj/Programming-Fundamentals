#include<stdio.h>
int main(){
	
	int i=0,sum=0,n;
	printf("Enter a number:");
	scanf("%d",&n);

	do{
	
	sum+=i;
	printf("\nsum of numbers %d:%d",i,sum);
	i++;
	}
	
	while(i<=n);
	
	return 0;
	}
	
