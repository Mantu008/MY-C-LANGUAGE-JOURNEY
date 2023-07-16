#include<stdio.h>
int main()
{
    /*Q1. wap to print multiplaction table 
         of a given number*/
      /*   
         int a,n;
         printf("enter n:");
         scanf("%d",&n);
         for(a=1;a<=10;a++)
         {
         	printf("table of%d*%d= %d\n",n,a,n*a);
		 }                               */              
      
	  // Q2. wap to print multiplicatin table of 10 in reverce order;
	/*
	  int a,n=10;
	  for(a=10;a;a--)
	  {
	    printf("table of 10*%d=%d\n",a,n*a);	
	  }                                       */
	   
	   
  //Q3. a do while loop is executed:
  
  /* 1. at list once
     2. at list twice      //  Ans: at list once
     3. t most once
     
    /* Q4.  what can be done using one time of loop can also be done using the other 
	       two types of loops (true or false) */
	       
	  //      ans:---yes
     
   //Q5. wap to sum first ten netural numbers using while loop;
    /*  
	 int i=1,sum=0,n;
	 printf("enter value of n:");
	 scanf("%d",&n);
 	 while(i<=n)
	 {
	 	sum+=i;
	 	i++;
	 }
	 printf("sum=%d",sum);      */
	 
	 //Q6. wap to implement program 5 using for and do-while loop .
         
         //using for loop.
       /*  
         int i,n,sum=0;
         printf("enter n:");
         scanf("%d",&n);
         for(i=1;i<=n;i++)
         {
         	sum+=i;
		 }
	      printf("sum=%d\n",sum);   */
	      
	      //using  do-while loop.
	      
	    /*  int i=1,n,sum=0;
	      printf("enter n:");
	      scanf("%d",&n);
	      do{
	      	  sum+=i;
	      	  i++;
		  }
		  while(i<=n);
		  printf("sum=%d",sum);   */
		  
	//Q7. wap to calculate the sum of the numbers occring in the multiplication table of 8
	 //   (8*1 to 8*10);
	  /*
	    int a,n=8;
		for(a=1;a<=10;a++)
		{
			printf("table of 8 is 8*%d=%d\n",a,n*a);
	    }                                                */
	    
	//Q8. wap to calculate the factorial of given number.
	/*
    int n,i,factriol=1;
    printf("enter n:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
    	factriol*=i;
	}
	printf("%d",factriol);   */
	
 // Q9. repeat 8 using while loop.
   /*
     int i,n,factriol=1;
     printf("enter n:");
     scanf("%d",&n);
       i=n;
      while(i>=1)
      {
      	factriol*=i;
      	i--;
      	
	  }
	  printf("%d",factriol);  */
	  
	  
  //Q10. wap to check whether a given number is prime or not using loops.
   /*
     int n,i,prime=1;
     printf("enter n:");
	 scanf("%d",&n);
	 for(i=2;i<n;i++)
	{ 
	 if(n%i==0)
	 {
	 	prime=0;
	 	 break;
	 }
   }
	 if(prime==1)
	 {
	 	printf("%d is  a prime number\n",n);
	 }
	 else
	 {
	 	printf("%d is not a prime number\n",n);
	 }                                          */
	 
	 //Q11.impliment 10 using other type of loops;
	   
	 /*  int i,n,prime=1;
	   printf("enter n:");
	   scanf("%d",&n);
	     i=2;
	     while(i<n)
	     {
	     	if(n%i==0)
	     	{
	     	  prime=0;
	     	  break;
			}
			i++;
		}
		   if(prime==1)
		   {
		   	printf("%d is a prime number\n",n);
		   }
		   else
		   {
		   	printf("%d is not a prime number\n",n);
		   }
		   i++;                                                  */
		 
	                        
   
   
	return 0;                    
}
