//array is collection of simmiler element variable:

//------------------------------------------------------------------------------
   /*
 	int marks[5];  //allocate space for 5 integers:
 	
 	printf("enter marks of first student:");
 	scanf("%d",&marks[0]);
 	printf("enter marks of second student:");
 	scanf("%d",&marks[1]);
 	printf("enter marks of third student:");
 	scanf("%d",&marks[2]);
 	printf("enter marks of four student:");
 	scanf("%d",&marks[3]);
 	printf("enter marks of fifth student:");
 	scanf("%d",&marks[4]);
 	
 	printf("you have enterd %d %d %d %d and %d",marks[0],marks[1],
	 marks[2],marks[3],marks[4]);   */
 //-------------------------------------------------------------------------------
 
 //QQ.wap to accept marks of five student in an array and print thrm to screen:
 /*
    #include<stdio.h>
	int main()
	{                                            //using loop:                                              	 
	 int i,marks[5];
	 
	  for(i=0;i<5;i++)
	 {
	 	printf("enter the value of marks of student %d:\n",i+1);
	 	scanf("%d",&marks[i]);    
	 }
	  for(i=0;i<5;i++)
	 {
	 	printf("the value of marks of student %d is %d\n",i+1,marks[i]);  
	 }   
	 
	 return 0;
}             */
//--------------------------------------------------------------------------------

	 
   //array initilazition in c
     
  /*   float a[]={3.8,4.9,5.2};
     printf("the value of a[0] is %f\n",a[0]);
     printf("the value of a[1] is %f\n",a[1]);         //as well as it apply int value:
     printf("the value of a[2] is %f\n",a[2]);    */
 
 //---------------------------------------------------------------------------------------------
 
 //pointer arthmetic :
/*
       int i=10;
       int*j=&i;
       printf("the value of j is %d\n",j);        // integer has 4 bite:
      // j++;
      // j=j+1;
      //j--;
      //j=j-1;
       printf("the value of j is %d\n",j); */
	 
	 /* 
	   char a=10;
	   char*b=&a;
	   printf("the value of b is %d\n",b); 
	   b++;
	   //b++;                                           //character has 1 bite :
	   printf("the value of b is %d\n",b); */
 
 //----------------------------------------------------------------------------------------------
 /* 1. addition of a number to a pointer:
    2. subtration of a number from a pointer:
    3. subtraction of a one pointer from another:
    4. comparsion of two pointer variable:  */
 
 //QQ.  try these operation on another variable by creating pointers in a separate program. demonstrate all the four operations:
     
   //  1.
     /*
         int a=13;
         int*b=&a;
         printf("the value of b is %d\n",b); 
         b++;
         printf("the value of b is %d\n",b);      */
 
   //2.
   
     /*
         int a=13;
         int*b=&a;
         printf("the value of b is %d\n",b); 
         b--;
         printf("the value of b is %d\n",b);     */
		 
		 //3.
		/* 
		 int a=10,b=12;
		 int*c=&a;
		 int*d=&b;  
		 printf("subtraction of one pointer from another is %d",&a-&b);*/
		 
		 //4.
		 
		 
//-----------------------------------------------------------------------------------------
    //input output help of pointer:
    /*
      int marks[4];
      int*ptr;
	//  ptr=&marks[0];
	    ptr=marks; 
		int i;            //both are doing same work:
        for(i=0;i<4;i++)
      {
      	printf("the marks of student no %d is:\n",i+1);
        scanf("%d",ptr);
      	ptr++;
	  }
	    for(i=0;i<4;i++)
      {
      	printf("the value of marks for student %d is %d\n",i+1,marks[i]);
	  }       */     
	  
//------------------------------------------------------------------------------------------
    //passing arrays to function:
   /*
    #include<stdio.h>
    void printarray(int*ptr,int n);
    int main()
    {
    
    	int arr[]={1,2,3,44,55,66,77};
	    printarray(arr,7);
	    printf("value of third element is %d",arr[3]);
    	return 0;
   }
	
void printarray(int*ptr,int n)
	{
		int i;
		for(i=0;i<n;i++)
		{
			printf("the value of element %d is %d\n",i+1,*(ptr+i));   //also use ptr++:
		}
		ptr[3]=200;
		
	}                          */

// second way:

  /*
    #include<stdio.h>
    void printarray(int ptr[],int n);
    int main()
    {
         int ptr[3];
    	int arr[]={1,2,3,44,55,66,77};
	    printarray(arr,7);
	    printf("value of third element is %d",arr[3]);
    	return 0;
   }
	
void printarray(int ptr[],int n)
	{
		int i;
		for(i=0;i<n;i++)
		{
			printf("the value of element %d is %d\n",i+1,ptr[i]);    
		}
		ptr[3]=400;   //the value will be change in main as well:
	}       */                                                        
	
	
//------------------------------------------------------------------------------------------------------------------

//multidimensional arrays:
 /*
#include<stdio.h>
int main()
{
 	int students=3,subjects=5,i,j;
 	int marks[3][5];
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<5;j++)
 		{
 			printf("enter marks of student %d in subject %d\n",i+1,j+1);
 			scanf("%d",&marks[i][j]);
		 }
		
	 }
	 for(i=0;i<3;i++)
 	{
 		for(j=0;j<5;j++)
 		{
 			printf(" marks of student %d in subject %d is=%d\n",i+1,j+1,marks[i][j]);
	    }
	    
	 }	
	 	
	return 0;       
}                            */

//----------------------------------------------------------------------
/*QQ.create a 2-d array by taking input from the user .erite a desplay function to 
           print the content of this 2-d array on the screen                   */
 /*    
#include<stdio.h>
int main()
{
	int student=3;
	int subject=4;
	int i,j;
	int marks[3][4];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		   	printf("enter marks of student %d in subject %d\n",i+1,j+1);
 			scanf("%d",&marks[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
			printf("marks of %d student:",i+1);
		for(j=0;j<4;j++)
		{
		   	printf(" %d",marks[i][j]);
		}
		printf("\n");
	}
	
	
}            */      


