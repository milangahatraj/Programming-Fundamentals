#include<stdio.h>
	int main(){
		int i,n,sum=0;
		printf("\nEnter any number:");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++){
		sum=sum+i*i;
		}
		printf("\n The sum of square of first n natural number is:%d",sum);
		return 0;
		}
		
