/*#include<stdio.h>
int main()
{         */          //address always define (%u):
//------------------------------------------------------
//pointers:--(store address any type of variable: 
    
  /*	 int i=64;
	 int*j=&i;  //j will now store the address of i:
	 printf("the value of i is %d\n",i);
	 printf("the value of i is %d\n",*j);  //also use(*(&i)):
   	 printf("the value of i is %d\n",*(&i));
	 printf("the address of i is %u\n",&i);
	 printf("the address of i is %u\n",j);
	 printf("the value of j is %d\n",*(&j));  //also use(j):
	 printf("the address of j is %u\n",&j);   */
	 
	//------------------------------------------------------ 
	 //----pointer to a pointer---------
	/* 
	 int i=47;
	 int*j=&i;
	 int**k=&j;
	 printf("the value of i is %d\n",i);
	 printf("the value of j is %d\n",&i);
	 printf("the value of k is %d\n",&j);
	 printf("the address of i is %u\n",j);
	 printf("the address of j is %u\n",k);
	 printf("the address of k is %u\n",&k);*/
	
  //-----------------------------------------------------
  /*types of function call: 
   
   1.call by value:--sending a value of argument:  */
/*
      #include<stdio.h>
      int sum(int a,int b);
      int main()
{
     int a=5,b=4;
     printf("the value of a and b before function call is %d and %d\n",a,b);
     printf("the sum is %d\n",sum(a,b));
     printf("the value of a and b after function call is %d and %d\n",a,b);
   	 return 0;
}
int sum(int a,int b)
{
	int c;
	c=a+b;
//	a=676;
//	b=654;    //here not change value of a and b :  
	return c;  
}             */

//-----2.call by reference:--sending address of a argument:
/*
  #include<stdio.h>
  void wrong_swap(int a,int b);
  void swap(int*a, int*b);
  int main()
  {
  	int x=4,y=8;
  	printf("the value of a and b before swap is %d and %d\n",x,y);
   // wrong_swap(a,b);  //will not work due to call by value:
  	swap(&x,&y);      //will work due to call by reference:
  	printf("the value of a and b is %d and %d\n",x,y);
  	return 0;
  }
 void wrong_swap(a,b) 
  {
  	int temp;
  	temp=a;
  	a=b;
  	b=temp; 	
  }       
void swap(int*a,int*b)
{
	int temp;
  	temp=*a;
  	*a=*b;
  	*b=temp; 	
} */                         

//----------------------------------------------------------------------------------

/*
  int a=6;
  int*b=&a;
  int**c=&b;
  printf("the value of a is %d\n",a);
  printf("the address of a is %u\n",&a);
  printf("the address of a is %u\n",b);
  printf("the value of b is %d\n",b);
  printf("the address of b is %u\n",&b);
  printf("the value of a and b is %d and %d\n",a,&a);
 return 0;
}                            */                       


/*
return 0;
}
*/
