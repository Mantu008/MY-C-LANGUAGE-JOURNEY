//Q. wapwap using function to find avrage of three number

/*#include<stdio.h>
float avg();
int main()
{  
     float c;
     c=avg();
    printf("avg of three number is=%f",c);	
	return 0;
}
 float avg()
 {
    float a,b,c,avg;
 	printf("enter value of a,b and c:\n");
 	scanf("%f %f %f",&a,&b,&c);
 	avg=(a+b+c)/3;
 	return avg;
 }*/
 //----------------------------------------------------------------------------------
 //Q2.wa function to convert celcious temprature into farahanite
 /*
 #include<stdio.h>
 void celtofar();
 int main()
 { 
      celtofar();
 	 return 0;
 }
 void celtofar()
 {
 	float cel,far;
 	printf("enter temprature os cel:");
 	scanf("%f",&cel);
 	far=(cel*9/5)+32;
 	printf(" the temprature in farahanite is %f",far);
 }              */
 
//----------------------------------------------------------------------------------
// Q3.waf to calculate the force of atteraction no a body of mass m exarted by earth(g=9.8m/s^2).
 /*
 #include<stdio.h>
 float force(float mass);
 int main()
 { 
    float mass;
  	printf("enter value of mass:\n");
  	scanf("%f",&mass);
 	printf("the forcr is=%f",force(mass));
 	 return 0;
  } 
  float force(float mass)
  {
  	float force;
  	force=mass*9.8;
  	return force;
  }                          */                         
  
  //--------------------------------------------------------------------------------------------------------------------------
  
  //Q4. wap using recursion to calculate nth elemint of fibonacci series.
  
 /*
  #include<stdio.h>
  int fibonacci(int n);
  int main()
  {  
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("fibonacci series for %d=%d",n,fibonacci(n));
  	return 0;
  }
   fibonacci(int n)
  {
  	int f;
  	if(n==0 || n==1)
  	{
  		return 1;
	  }
	  else
	  {
	     f=(n-1)+(n-2);
	     return f;
	  }    
	  
	  }                 */
	  
	//-----------------------------------------------------------------------------------------------------------------------------------
//	Q5. what will be the following line produce in a  c program {printf("%d %d %d\n",a,++a,a++)}.
/*	  
#include<stdio.h>
int main()
{
	int a=4;
	printf("%d %d %d\n",a,++a,a++);  //in gcc compilar take argument order of(righr to left)
	return 0;
}   */

//--------------------------------------------------------------------------------------------------------------------

//Q6.write a recursive funtion to calculate the sum of first n natural number.
  /*
#include<stdio.h>
int sumnnnetural(int n);
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	printf("sum of first %d netural num is=%d",n,sumnnetural(n));
	
	return 0;
}
int sumnnetural(n)
{
	int s;
	s=n*(n+1)/2;
	return s;         
}     */

//----------------------------------------------------------------------------------------------------------------------

//Q7. wap using function to print the following pattern(firsr n lines).
/* 

                  *
                  * * *
                  * * * * *             */
/*
#include<stdio.h>
void pattern();
int main()
{ 
   
	pattern();
	return 0;
}
void pattern()
{
		int n,i,j;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<(2*i-1);j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}              */
   
                              
 
