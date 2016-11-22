#include<stdio.h>
	int main(){
		int i=0,n,sum=0;
		printf("\nEnter any number:");
		scanf("%d",&n);
		for(i=0;i<=n;i++){
		sum+=i;
		
		}
		printf("\nThe sum of first n natural number:%d",sum);
		return 0;
		}
		
