#include<stdio.h>
	int main(){
		int i,age;
		char name[20],address[20],gender[8];
		printf("\n Enter Your Name:");
		scanf("%s",name);
		printf("\n Enter Your Address:");
		scanf("%s",address);
		printf("\n Enter Your Age:");
		scanf("%d",&age);
		printf("\n Enter Your Gender:");
		scanf("%s",gender);
		for(i=0;i<5;i++){
			printf("\n%s" "\n%s" "\n%d" "\n%s",name,address,age,gender);
		}
		
		return 0;
	}
