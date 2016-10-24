#include<stdio.h>
#include<math.h>
	int main(){
		float a,b,c,d,root;
		printf("\nEnter the value of a:");
		scanf("%f",&a);
		printf("\nEnter the value of b:");
		scanf("%f",&b);
		printf("\nEnter the value of c:");
		scanf("%f",&c);
		d=pow(b,2)-4*a*c;
		
		printf("Discriminant:%f",d);
		if(d>0){
			root=(-b+pow(d,0.5))/2*a;
			printf("\nFirst root is:%f",root);
			root=(-b-pow(d,0.5))/2*a;
			printf("\nSecond root is:%f",root);
		}
		else{
			printf("\nInvalid");
			
			
			
			
			
		}
	}
	
