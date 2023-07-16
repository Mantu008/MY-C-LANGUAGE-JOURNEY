#include<stdio.h>
int main()
{
	
           	// chepter 4 loop control instruction:
	  
	     //loops are use to repeat  simmiler part of program;
	  


	/*   int a=;
	   for(a=1;a<=10;a++)
	   {
	   	printf(" %d",a);
	   }                */
	   
	   
	   
     ///  1st loop: while loop;        ------          // loop is execute whenever our condition is not false;  
    
	  /*  int a;
        scanf("%d",&a); 
    //	while(a<=15)----this loop is not infinite
	//  while(a>15)-----this loop is infinite
	{
	
     	printf("%d",a);
     	a++;
	 }                    */
	 
	 
	// Quick quiz:wap to print natural number from 10 to 20 when initial loop continue i is initiling to 0;
	/*
	    int i=0;
    	while(i<=20){
		if(i>=10)
		{
		printf("the value of i is %d\n",i);
    	}
    	  i++;   
    	}                         */
    	
    	
    	
    	// incriment decriment operator;
    	
       //	 i++ ,i--        // pahale print fir incriment
      //	 ++i,--i        //pahale incriment fir print
    	
    	
	 
	/* 
	 int a=8;
	 printf("%d\n",++a); (9)
     printf("%d\n",a++); (9)
     printf("%d\n",a);   (10)
	 printf("%d\n",--a); (9)
	 printf("%d\n",a--); (9)
     printf("%d\n",a);   (8)    */
     
      // += is compound assigement operator
	/*                        
	int a=8;
	 printf("the value of a is %d\n",a++);
	 a++;
	 ++a;
	 printf("the value of a is %d\n",a);
	 a+=5;
	 printf("the value of a is %d\n",a);
	 a-=5;
	 printf("the value of a is %d\n",a);
	 a*=5;
	 printf("the value of a is %d\n",a);
	 a/=5;
	 printf("the value of a is %d\n",a);    */
	 
  //	 2nd loop: do while loop ----------- at list 1st statment will execute whin  while condition is false;
	/*
	    int a=0;
	    do{
	    	printf("%d\n",a); 
	    	a++;
		}
		while(a<=10);   */
		
		//Quick quiz: wap to print first n natural numbers using do wile loop; input=4
	  /*	
		int n,a=0;
		printf("value of n:");
		scanf("%d",&n);
		do{
			printf("%d\n",a+1);
			a++;
		}
		while(a<n);     */
		
		
		// 3rd loop----- for loop------- if condition is false program will not execute;
	 /*	                               
	                          for loop incriment example;
		
	      int a;
		for(a=0;a<=20;a++)
		{                                         for(insilizition;condition;incri\decri)
			printf("%d\n",a);                        {
        	                                             printf("statment");
													 }
		}	                                                                           */
		
		
	//	Quick quiz: wap to print first n natural number usinf for loop:
	/* 
	 int i,n;
	 printf("enter n:");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\n",i+1);
	 }                             */
	
	
	
	// Quick quiz: wap to print n natural number in reverce using for loop;
	
	/*                             //  for loop  decriment exampal;  
	 int i,n;
	 printf("enter n:");                             
	 scanf("%d",&n);
	 for(i=n;i;i--)            //here non 0 condition is considerd as a true value;
	 {
	 	printf("%d\n",i);
	 }                           */
	 
	     
	
	// breck condition;
	   
	   /* breck statment is used to breck the loop,irrespect of weather condition is true or false */
	            
	 
	/*                       //break statment in , for loop;        
	  int a;
	  for(a=0;a<=15;a++)
	  {
	  	
	  	printf("%d\n",a);
	  	if(a==6)                //so the loop is break and all given condition is not executed;
	  	 {
	  	 	break;
		 }  
	   
	   }         */
		                                     
	/*  
	  int a=0;                     
	  do                       // break statment in do while loop;
	  {
	  	printf("%d\n",a);
	  		if(a==9)
	  	  {
	  	   break;
		  }
	  	a++;
	  }
	  while(a<=20);         */
	  
	/*  int a=0;                 
	  while(a<=15)
	  {
	  	printf("%d\n",a);
	  	if(a==7)                     //break statment in while loop;
	  	{
	  		break;
		}
		a++;
	  	
	  }                                   */
	  
	  
	   
      	  
	  /* continue statment-----continue statment is used for skip those loop
	      to given continue statment */
	      
	      
	    // example
	    
	    // continue statment ,for loop
	  
	  
	/*  	                       //break statment in for loop;        
	  int a;
	  for(a=0;a<=15;a++)
	  {
          	if(a==5)            //so the given continue statment is skip remening all condition is executrd;
	  	    {
	  		continue;
		    }
	  	  printf("%d\n",a);
	  	
	  	                    
	  	 }                                */               
	  
	      // continue statment in while loop;  
	  /*
       int a=0;                 
	  while(a<=15){
	  	a++;
	  	if(a==8)
		  {
	  		continue;
		  }
	  	printf("%d\n",a);
	  }                     */
	  
	  
	  
	  
	  // continue statment in do while loop;
	  
	 /*  int a=0;                     
	   do                      
	   {
	   	    a++;
	   	    if(a==5)
	   	    {
	   	    	continue;
			   }
	    	printf("%d\n",a);
	   }
	    while(a<=20);    */
	    
	  /*  
	    int i=0,skip=5;
	    while(i<10)
	    {
	    	i++;
	    	if(i!=skip)
	    	{
	    		continue;
			}
	    	else
		   {
		    printf("%d\n",i);
	       }
				   
		}              */
	  return 0;
}
