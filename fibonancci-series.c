#include<stdio.h>
int main(){
	int i=1,n,n1=1,n2=1,n3;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("%d\t%d\t",n1,n2);
	while(i<=n){
	n3=n1+n2;
	printf("%d\t",n3);
	
	n1=n2;
	n2=n3;
	i++;
	}
	return 0;
	}
	
