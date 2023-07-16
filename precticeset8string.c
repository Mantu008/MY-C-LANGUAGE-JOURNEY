/*
#include<stdio.h>
#include<string.h>
int main()
{                         */
//-------------------------------------------------------------
 /* //Q1. which of the following is used to appropriately read a multi word string.
   
   (a) . gets()       // this statment is true.
   (b) . puts()    
   (c) . printf()
   (d) . scanf() 
   
//-----------------------------------------------------------
  
/* Q2 wap to take string as an input from the user  using %c and %s  conform that the string  are equal or not  */
/*   
    char st1[29];
    char st2[29];
    char c;
    int i=0;
    
    printf("the value of first strig:\n");
    scanf("%s",st1);
     
    printf("enter the value of second string charactor by charactor:\n");
    
    while(c!='\n')
    {
    	fflush(stdin);
    	scanf("%c",&c);
    	st2[i]=c;
    	i++;
	}
	  st2[i-1]='\0';
	  printf("the value of st1 is=%s\n",st1);
	  printf("the value of st2 is=%s\n",st2);
	  printf("strcmp for this returns %d",strcmp(st1,st2));         */
	  
	  
//--------------------------------------------------------------
  
 // Q3. write your own version of strlen function from <string.h>   .
 /*
  #include<stdio.h>
  int strlen(char*str);
  int main()
  { 
     int length;
     char str[]="mantukumarmorya";
     length=strlen(str);	
     printf("the length of the string=%d",length);
  	 return 0;
  }
  int strlen(char*str)
  {
  	char*ptr=str;
  	int length=0;
  	while(*ptr!='\0')
  	{
  		length++;
  		ptr++;
	  }
	  return length;
  }                                  */
  
                 
 
 
//--------------------------------------------------------------------

/* Q4. waf slice() to slice a string it should change the orignol string such that
  it is now the sliced string take m and n as the start and ending position for  slice .*/
 /* 
    #include<stdio.h>
    void slice(char*st,int m,int n);
    int main()
    {
    	char st[]="mantukumar";
    	slice(st,1,4);
    	printf("%s",st);
    	
         
    	return 0;
	}
	void slice(char*st,int m,int n)
	{
		int i=0;
		while((m+i)<n)
		{
			st[i]=st[i+m];
			i++;
		}
		st[i]='\0';
		
		
			}         */
  
  
//------------------------------------------------------------------------

// Q5. write your own version of  strcpy() function <string.h> . 
/*
#include<stdio.h>
#include<string.h>
char copy(char*st1,char*st2);
int main()
 {
 	
	char*st1="mantu kumar";
 	char st2[30];
 	copy(st1,st2);
 	printf("the value of st1=%s",st2);
 	return 0;
 }
 char copy(char*st1,char*st2)
{
	char x2;
    x2=strcpy(st2,st1);
 	return x2;
}                          */                           
//---------------------------------------------------------------------------

// Q6. wap to encrypt a string by adding 1 to the actual value of its cherector .
 /*
  #include<stdio.h>
  void encrypt(char*c);
  
  int main()
  {
  	char c[]="mantu";
  	encrypt(c);
  	printf("encryptrd string is=%s",c);
  	return 0;
  }
  void encrypt(char*c)
  {
  	char*ptr=c;
  	while(*ptr!='\0')
  	{
  	   *ptr=*ptr+1;	
  	   	ptr++;
	}
  }
  */

 

//---------------------------------------------------------------------------------

//  Q7. wap to decreapt the string encryped using encrypt function in problom 6 .
/*
   #include<stdio.h>
  void decrypt(char*c);
  
  int main()
  {
  	char c[]="nbouv";
  	decrypt(c);
  	printf("decryptrd string is=%s",c);
  	return 0;
  }
  void decrypt(char*c)
  {
  	char*ptr=c;
  	while(*ptr!='\0')
  	{
  	   *ptr=*ptr-1;	
  	   	ptr++;
	}
  } 
  */

//----------------------------------------------------------------------------------
 //Q8. wap to count the occurence of a given cherector in a string .
  /*
  #include<stdio.h>
  int occurence(char st[],char c);
  int main()
  {
  	int count;
  	char st[]="mantuu";
  	count=occurence(st,'u');
  	printf("the occurence is %d",count);
  	return 0;
  }
 int occurence(char st[],char c)
 {
 	char*ptr=st;
 	int count=0;
 	while(*ptr!='\0')
 	{
 		if(*ptr==c)
 		{
 			count++;
		 }
		 *ptr++;
	 }
 	return count;
 }   */
 
//-----------------------------------------------------------------------------
//Q9. wap to check whether a given charector is present in a string or not .
/*  
   #include<stdio.h>
   char occurence(char*st[],char c);
   int main()
   {
   	char st[]="mantu";
   	occurence(st,'u');     // change cherector here:
   	return 0;
   }
   char occurence(char*st[],char c)
   {
   	char*ptr=st;
   	char present,notpresent;
   	while(*ptr!='\0')
   	{
   	if(*ptr==c)
   	{
   	    	printf("given cherector is present in a string\n");
   	    	break;
	   }
	        *ptr++;
   	}
   	if(*ptr!=c)
     {
        printf("given cherector is not present in a string\n");
     }
   }     */
    
                                            //the end.
//--------------------------------------------------------------------------------  

/*
   return 0;	
}*/
