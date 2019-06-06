#include<stdio.h>

int input(int *a,int *b)
{
	
	printf("enter the first number:");
	scanf("%d",a);
	printf("enter the second number:");
	scanf("%d",b);

}
int add(int a,int b)
{
 	int sum;	
 	sum=a+b;
return sum;
}
int output(int a,int b,int c)
{
	printf("addition of two numbers is:%d+%d=%d",a,b,c);
return 0;
}
void main()
{
	int i,j,k;
	input(&i,&j);
	k=add(i,j);
	output(i,j,k);
}
