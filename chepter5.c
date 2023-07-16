#include<stdio.h>
//-----------------------------------------------------------------------------------------------------------------------------------------
/*void aboutmyself();
int main()
{
   int a;
   printf("initializing aboutmyself function\n");
   aboutmyself(); //function call;
   printf("finish aboutmyself function\n");  	
   
   return 0;
}
 // function definition;
  void aboutmyself(){
 	printf("my name is mantu kumar,now i am b tech 1year student of marwadi university\n");
 }  */
 
 //--------------------------------------------------------------------------------------------------------------------------------------
 
 /*quick quiz:  wap a program with therr functions:
  1.good morning function which prints("good morning")
  2.good afternoon function which prints("good afternoon")
  3.good night function which prints("good night")
  main() should call all of these in order1-->2-->3*/
  
/*void print();
 int main()
 {
 	print();
 
   return 0;
 }

 
   void print(){
   	
   	printf("good morning mantu\n");
   	printf("good afternoon mantu\n");
   	printf("goof night mantu\n");
   }                          */
//-------------------------------------------------------------------------------------------------------------------------------------------   
    // function inside function:
/*	
void goodmorning();
void goodafternoon();
void goodnight();
 
 
 int main()      
 {                           //main call goodmorning function:
 	goodmorning();  
 
    return 0;
 }
 
 void goodmorning(){               //good morning call goodafternoon function:
 	printf("good morning mantu\n");
 	goodafternoon();
 }
 void goodafternoon()               //good afternoon call goodnight function:
 {
 	printf("good afternoon mantu\n");
 	goodnight();
 }
 void goodnight(){ 
 	printf("good night mantu\n");
 }       */                         
 
 
// ----------------------------------------------------------------------------------------------------------------------------

//sum is a function which taker a and b as input and returns as integer as an output 
/*
int sum(int a, int b);  // function prototype declaration
int main()
{
    int c;
	c=sum(4,5);
	printf("The value of c is %d\n",c);      //here a and b are  parameter(variable place holder),4 & 5 are argument(actual values):
	return 0;
}
int sum(int a,int b){  //----both int are different which has different values
	int d;
	d=a+b;
	return d;
}          */      

//-----------------------------------------------------------------------------------------------------------------------------------
 /*
void change();
int main(int a)
{
	int b=260;
	printf("The value of b before change is %d\n",b); 
	change(b);
	printf("The value of b after change is %d\n",b);
	return 0;
}
void change(int a){
	
   a=77;
}             */        

//----------------------------------------------------------------------------------------------------------------------------------------
/* Quick quiz: use the library functions to calculate the area of a squire with side a: */
/*
void area();
int main()
{
     area();
	return 0;
}
void area(){
	int area,a;
	printf("a:");
	scanf("%d",&a);
	area=a*a;
    printf("The area of a squire is=%d\n",area);
}                                                      */
 //-----------------------------------------------------------------------------------------------------------------------------------------
/*
 #include<math.h>
 int main()
 {
 	int side;
 	printf("enter side:");
 	scanf("%d",&side);
 	printf("The area of squire is=%f",pow(side,2));
 	return 0;
 	
 }                          */
 
 //===================================================================================================================
  // recercon:  
  /*

 #include<stdio.h>
int fact(int a);
int main()
{ 
      int a;
    printf("enter value of a:\n");
    scanf("%d",&a);
   
    printf("the value of fact %d is %d\n",a,fact(a));
    return 0;
}
  int fact(int a)
{     
      int f;
	printf("cooling factriol %d\n",a);
   
    if(a==1 || a==0)
    {

        return 1; 
    }
    else
    {
       f=a*fact(a-1);
         return f;
    }                                 

}
     */
