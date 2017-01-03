#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the number you want to display the pattern:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=n;j++){
		if(i>j){
	printf("\t");
	}
	else{
	printf("*\t");
}
}
	printf("\n");
	}
	return 0;
	}
