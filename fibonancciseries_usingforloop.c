#include<stdio.h>
int main()
{
int i,n,n1=1,n2=1,n3;
printf("Enter the number of terms:");
scanf("%d",&n);
printf("%d\t%d\t",n1,n2);

for(i=1;i<=n;i++)
{
n3=n1+n2;
printf("%d\t",n3);
n1=n2;
n2=n3;
}
return 0;
}
