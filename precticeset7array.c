/*#include<stdio.h>
int main()
{  */

/*Q.1 creat an array of ten number .verify using pointer arthmetic that 
(ptr+2) points to the third element where ptr is  a pointr pointing to 
the first element of the array.  */	
    /*
	int arr[10];
    int*ptr=arr;
    ptr=ptr+2;
    if(ptr==&arr[2])
    {
    	printf("these point to the same location");
	}
	else
	{
		printf("these do not point to same location");
	}   */
	
// Q3.if s[3] is a 1-d array of integer then *(5+3) refers to the third element
  
  // that statment is false.
    
  /*Q3. wap to creat an array of 10 integer and store  multiplication
        table of 5 in it.  */
         /* 
          int table[10];
          int i,n;
		   for(i=1;i<=10;i++)
          {
          	  table[i]=5*(i+1);
		  }
		  for(i=0;i<10;i++)
		  {
		  	printf("5*%d = %d\n",i+1,5*(i+1));
		  }   */ 
		  
		  
//   Q4.repat problom 3 for a genaral input provided  by the user using scanf .
	/*	  
		  int multi[10];
		  int n,i;
		  printf("enter value of n:");
		  scanf("%d",&n);
		  for(i=0;i<10;i++)
		  {
		  	multi[i]=n*(i+1);
		  }	
		  for(i=0;i<10;i++)
		  {
		  	printf("table of %d * %d =%d\n",n,i+1,n*(i+1));
		  }	                   */
		  
		  
//  Q5.  wap contaning a function which  revreses the array passed to it.
        /*
         #include<stdio.h>
         void revarr(int*arr,int n);
         int main()
         {
         	int temp;
         	int arr[]={1,2,3,4,5,6,7};
         	revarr(arr,7);
         	int i;
         	for(i=0;i<7;i++)
         	{
         		printf("the value of %d element is %d\n",i,arr[i]);
			 }
         	return 0;
		 }
		 void revarr(int*arr,int n)
		 {
		 	int temp;
		 	int i;
		 	for(i=0;i<n/2;i++)
		 	{
		 	temp=arr[i];
		 	arr[i]=arr[n-i-1];
		 	arr[n-i-1]=temp;
		    }
		 }          */
		 
         
         
 // Q6. wap contaning function  which counts the number of positive unteger in an array.       
	/*
	#include<stdio.h>
	void addvearray();
	int main()
	{
       addvearray();
		return 0;
    }      
    void  addvearray()
    { 
    	int i,arr[5];
    	int array=0;
    	for(i=0;i<5;i++)
    	{
    		printf("chose %d array:\n",i+1);
    		scanf("%d",&arr[i]);
    	if(arr[i]>1)
	    {
			array=array+1;
		}
		}
	     
		 printf("total positive array is = %d",array);
	
	}
	*/
	
// Q7. creat an array of size (3x10) contaning  multiplication table of the number  2,7,9 respectively.
      
       /*    #include<stdio.h>
            void mult(int*multiple,int num,int n);
           int main()
           {
           	 
           	 int multiple[3][10];
           	 mult(multiple[0],2,10);
           	 mult(multiple[1],7,10);
           	 mult(multiple[2],9,10);
           	 
			   return 0;
			} 
			void mult(int*multiple,int num,int n)
			{
				int i;
				 printf("the multiplication of %d is:\n\n",num);
			    for(i=0;i<n;i++)
			    {
			    	multiple[i]=num*(i+1);
				}
				for(i=0;i<n;i++)
			    {
			    printf("the multiple is %d\n",multiple[i]);
				}
				
				printf("\n**************************************\n\n");
			}  */
			
//repeat problem 7 for a costum inpur givin bythe user.
   /*
     #include<stdio.h>
     void mult(int*multiply,int num,int n);
	 int main()
	 {
	 	int num;
	   	int multiply[3][10];
	   	mult(multiply[0],num,10);
	   	mult(multiply[1],num,10);
	   	mult(multiply[2],num,10);
	   	return 0;
	 }
	void mult(int*multiply,int num,int n)
	 {
	 	int i;
	 	printf("enter n:\n");
	 	scanf("%d",&num);
	    for(i=0;i<n;i++)
	    {
	      multiply[i]=num*(i+1);
		}
		for(i=0;i<n;i++)
	    {
	    	printf("multiply of %d X %d is=%d\n",num,i+1,multiply[i]);
		}
		printf("\n**************************\n\n");
	 }		       */  
	 
//Q9. c\\reate a three dimensional array and print the address of its elements in increa sing order.
    /*  
	  #include<stdio.h>
	  int main()
	  {
	  	int arr[2][3][4];
	  	int i,j,k;
	  	for(i=0;i<2;i++)
	  	  {
	  	  for(j=0;j<3;j++)
	   	 {
			for(k=0;k<4;k++)
		{
		  printf("the address of arr[%d][%d][%d]is=%u\n",i,j,k,&arr[i][j][k]);	
		}
		 }
		   }
	  	return 0;    
	  }	      */
