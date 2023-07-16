#include<stdio.h>
int main()
{
  /*	float tax=0,income;
	printf("enter income:");
	scanf("%f",&income);
	
	if(income>=250000 && income<=500000)
     {
     	tax = tax +0.05*(income-250000);
	 }
	 if(income>=500000 && income<=1000000)
	 {
	 	tax = tax + 0.20*(income-500000);
	 }
	 if(income>1000000)	
	 {
	 	tax = tax + 0.30*(income-1000000);
	 }
	 printf("tax=%f",tax);   */
	 
	 int a,b,c,d;
	 printf("enter value of a,b,c and d:");
	 scanf("%d %d %d %d",&a,&b,&c,&d);
	  if(a>b && a>c && a>d)
	  {
	  	printf("a is max");
	  }
       else if(b>a && b>c && b>d)
      {
      	printf("b is max");
	  }
	   else if(c>a && c>b && c>d)
	 {
	 	printf("c is max");
	 }
	 else
	 {
	 	printf("d is max");
	 }
	 
	 
	 
	return 0;   
}
