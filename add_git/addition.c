#include<stdio.h>

int addition(int n1,int n2)
{
return n1 + n2;
}


int subtract(int n1,int n2)
{
return n1 - n2;
}

int addition(int n1,int n2)
{
return n1 + n2;
}

int addition(int n1,int n2)
{
return n1 + n2;
}


void main()


{
	float num1,num2,sum,diff,prod,div;
	printf("Enter the first number: ");
	scanf("%f",&num1);
	printf("Enter the second number: ");
	scanf("%f",&num2);
	sum= addition(num1,num2);
	printf("Sum is %f",sum);
	
	diff= subtract(num1,num2);
	printf("Difference is %f",diff);
	
	sum= addition(num1,num2);
	printf("Sum is %f",sum);
	
	sum= addition(num1,num2);
	printf("Sum is %f",sum);

}
