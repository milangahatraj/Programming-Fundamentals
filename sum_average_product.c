/*write a program that takes three input as integers from keyboard then print, sum, average, product,
smallest,largest of these three numbers.*/
#include<stdio.h>
	int main(){
		int n1,n2,n3,sum,average,product;
		printf("Enter the first number:");
		scanf("%d",&n1);
		printf("Enter the second number:");
		scanf("%d",&n2);
		printf("Enter the third number:");
		scanf("%d",&n3);
		sum=n1+n2+n3;
		printf("Sum of three numbers is:%d,%d&%d =%d\n",n1,n2,n3,sum);
		average=(n1+n2+n3)/3;
		printf("The average of three numbers is:%d,%d&%d=%d\n",n1,n2,n3,average);
		product=n1*n2*n3;
		printf("The product of three numbers is:%d,%d&%d=%d\n",n1,n2,n3,product);
		(n1>=n2)?(n1>=n3?
		printf("%d is greatest",n1):
		printf("%d is greatest",n3)
		):
		(n2>=n3)?
		printf("%d is greatest",n2):
		printf("%d is greatest\n",n3);
		
		
		(n1<=n2)?(n1<=n3?
		printf("%d is smallest\n",n1):
		printf("%d is smallest",n3)
		):
		(n2<=n3)?
		printf("%d is smallest",n2):
		printf("%d is smallest",n3);
		
		return 0;
		
			
	}
		
