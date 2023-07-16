#include<stdio.h>
int main()
{
	int n,i;
	printf("enter value of n:");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
	    if(n%i|| n%1)
	{
		printf("number is prime");
	}
	else
	{
		
		printf("number is not prime number");
	}
	}
	return 0;
}
