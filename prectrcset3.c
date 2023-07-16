#include<stdio.h>
int main()
{
	//Q.1 what is the output;
	
/*	int a=10;
	if(a=11)            //output is i am 11 because there is = not ==;
	{
		printf("i am 11\n");
	}
	else
	{
		printf("i am not 11");
	}                         */
	
 /*	Q2.wap to find out whether a student pass or fail ,if requires total 40% and at least 
       33% in each subject to pass assume 3 subjects and take marks as an input from the user*/
       
     /*  
       int physics,chemistry,maths;
       float total;
       
       printf("enter marks of physics="); 
       scanf("%d",&physics);
       printf("enter marks of chemistry="); 
       scanf("%d",&chemistry);
       printf("enter marks of maths="); 
       scanf("%d",&maths);
       
       total=(physics+chemistry+maths)/3.0;
       printf("total percentage=%f\n",total);
       
       if(total<40 || physics<33 || chemistry<33 || maths<33)
       {
       	printf("your total percentage is=%f and you are fail\n",total);
	   }
	   else
	   {
	   	printf("your total percentage is=%f and you are pass",total);
	   }                                                          */
	   
	   
	   
	   /*Q3 wap  to calculate income tex paid by an employ to the goverment as an input from the user;
	   
	      income slav        tax
	      
	      2.5L-5.0L          5%
	      5.0L-10.0L         20%
	      above 10.0L        30%   */
	      
	// note there is no tex below 2.5L .take income amount as an input from the user.
	 /*
	  	float tax=0,income;
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
	 printf("tax=%f",tax);      */
	 
	 
	 
	//Q eap to find weather a year enterd  by user is a leap year or not
	
	// year divisible by 4-----leap year;     
	 // year divisible by 100---not leap year;             // year doesnot follow this three rule year not in leap year;
	 // year divisible by 400----leap year;
       
     /*  
       int y;
       printf("enter year:");
       scanf("%d",&y);
       
     if(y%4==0)
     {
     	if(y%100==0)
     	{
     		if(y%400==0)
     		{
     			printf("year is in leap");
			}
			 else
			 {
			 	printf("year is not in lrap");
			 }
     		
		}
		else
		{
			printf("year is in leap");
		}
	 }
	 else
	 {
	 	printf("year is not in leap");
	 }                                   */
	 
	 
	 
	 
	 //Q5. wap to determine weather a chracter enterd by a user lowercase or  not;
	 //     97-122 = a-z (asci value);
	 
	/*  char ch;
	  printf("enter cherecter:");
	  scanf("%c",&ch);
	  if(ch<=122 && ch>=97)
	  {
	  	printf("character is in lowercase");
	  }
	  else
	  {
	  	printf("character is not in lowercase");
	  }                                              */
	    
	    
	    
	    

  return 0;
}
