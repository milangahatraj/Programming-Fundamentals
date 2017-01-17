#include<stdio.h>
#include<math.h>
#define pi 3.14
int diameter(float r);
int circumference(float r);
int area(float r);
int main()
{
	float r;
	printf("Enter the value of radius:");
	scanf("%f",&r);
	area(r);
	circumference(r);
	diameter(r);
	return 0;
	}
	int area(float r)
	{
	float a;
	a=pi*r*r;
	printf("The area of circle is:%f\n",a);
	return 0;
		}
int circumference(float r)
{
	float c;
	c=2*pi*r;
	printf("The circumference of circle is:%f\n",c);
	return 0;
	}
	int diameter(float r)
	{
		float d;
		d=2*r;
		printf("The diameter of circle is:%f\n",d);
		return 0;
		}
	



