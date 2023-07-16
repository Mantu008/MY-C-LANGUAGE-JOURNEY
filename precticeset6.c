/*#include<stdio.h>
void vari(int i);
int main()
{ */
  //----------------------------------------------------------------
 //Q1.wap to print the address of a variable use this address to get value of this variable.
 /*	int a=22;
	int*b=&a;   //it is not mandetory in this question.
	printf("the address of a is %u\n",&a);
	printf("the value of a is %d\n",*(&a));*/
	
	
	//-----------------------------------------------------------------
 /*Q2.wap having a variable i,print the address of i . pass this variable to a function 
   and print its address .arc these address saame ?why?.    */
 /*  #include<stdio.h>
    void vari(int i);
    int main()
{
    int i=17;
    printf("the address of i is brfore function %u\n",&i);
   	vari(i);        
   	return 0;    //both address are not same because 1 has a orognol value of variable pther has copy of variable so it maight little change.
}
void vari(i)
{
	printf("the address of i is %u\n",&i);
}                                            */


//--------------------------------------------------------------
   /* Q3.wap to change the value of a variable to ten times of its current value .waf 
      and pass the value by reference.  */
      
  /*    
#include<stdio.h>
void var(int a,int*nvar);
int main()
{
	int a=5,nvar;
	var(a,&nvar);
	printf("10 time change value of a is %d",nvar);
	return 0;
}
void var(int a,int*nvar)
{
   *nvar=10*(a);
}   */
      
     
     
//----------------------------------------------------------------------------------
/*  Q4.wap using a function which calculate sum and avg of two numbers.use pointers and print the value of
   sum and avg in main.  */
 /*  
#include<stdio.h>
void addavg(int a,int b,int*sum,float*avg);
int main()
{
	int a,b,sum;
	float avg;
	a=5;
	b=6;
	addavg(a,b,&sum,&avg);
	printf("the value of sum is %d\n",sum);
	printf("the value of avg is %f\n",avg);
}
void addavg(int a,int b,int*sum,float*avg)
{
	*sum=a+b;
	*avg=(float)*sum/2;
}                              */


//--------------------------------------------------------------
// Q5. wap to print the value of a variable i by using "pointer to pointer " type of variable:
  
  /*
#include<stdio.h>
int main()
{
	int i=12;
	int*j=&i;
	int**k=&j;
	printf("the value of a is %d",**(&j));
	
	return 0;             
}                      */


//-----------------------------------------------------------------------
 //Q6.try problom 3 using call by value and verify thet it does not chenge the value of the said variable
 
 /*
 #include<stdio.h>
int var(int a);
 int main()
 {
 	int a=5;
 	printf("10 times chenge variable is %d",var(a));
 	return 0;
 }
  int var(int a)                  // yes the value are sams as Q3.
 {
 	int nvar;
 	nvar=10*(a);
 	return nvar;
 		
 }                                         */

