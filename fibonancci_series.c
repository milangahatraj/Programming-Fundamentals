//wap to print forllowing fibonancci series.
//lab sheet no:21
#include<stdio.h>
	int main(){
		int i,n1=1,n2=1,sum=0;
		
		//printf("Enter the first number:");
		//scanf("%d",&n1);
		//printf("Enter the second number:");
		//scanf("%d",&n2);
		//printf("%d\t%d",n1,n2);
		for(i=1;i<=10;i++)
		{
		sum=n1+n2;
		printf("  %d",n1);
		n1=n2;
		n2=sum;
		
	    }
	return 0;
	
}
		
			
		
