#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fact*=i;
	}
	printf("%d",fact);
}
