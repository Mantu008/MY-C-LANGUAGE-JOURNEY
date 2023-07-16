/*#include<stdio.h>
int main()
{ */  
   
   // char str[]={'m','a','n','t','u','\0'};     //those both string are valid
  
  
   //   char str[]="mantu";                     // there has not required to nill cherecter at last,c add null cherector at last atometicly.
	  
//QQ. creat a string using " " and print its content using a loop.
/* 
  char str[]="mantu kumar";         //also use  str[]={'m','a','n','t','u','\0'};
  char*ptr=str;
  while(*ptr!='\0')
  {
  	printf("%c",*ptr);
       ptr++;
  }                            */      
//-------------------------------------------------------------------------  
 /*  char str[]="mantu kumar";
   char*ptr=str;
   printf("%s",str); */
   
//---------------------------------------------------------------------------
 /* 
   char s[12];
   printf("enter name:\n");
   scanf("%s",s);
    printf("your name is %s",s); */
//--------------------------------------------------------------------------
  //also print space we use gets(s);
  
  /*
    char s[15];
    printf("enter name:\n");
    gets(s);
    printf("the name is %s",s);  */    
    
//-------------------------------------------------------------------
  
   /*
     // puts(s) is use for print string in next line:
      
      char s[13];
      printf("enter name:\n");
      gets(s);
      puts(s);          
      printf("your name is:%s",s);  */
      
//------------------------------------------------------------------------
  /*         
//   char*ptr="mantu kumar";       //ptr="mantu morya" is assign in this deta type.
//   char ptr[]="mantu kumar";     //ptr="mantu morya" not assign in this deta type.
      ptr="mantu morya";    
                         */
 
//----------------------------------------------------------------------------------                       
/*
#include<stdio.h>
#include<string.h>
 int main()
 {
 	char*st="mantu kumar";         //space has also length.
 	int length=strlen(st);     //strlen is used for count number of crector in stringexcluding the null cherector(\0).
 	printf("the length of string st is %d",length);
 	return 0;
 }  */
 
 //--------------------------------------------------------------------------------------------
/*
#include<stdio.h>
#include<string.h>
 int main()
 {
 	
 	char*arr="mantu kumar";
 	char copy[30];
 	strcpy(copy,arr);                    //it is used to copy arr incide copy:
 	printf("the copy is=%s",copy);
 	return 0;
 }       */ 
 
 //-----------------------------------------------------------------------------------------------------------------
/*
#include<stdio.h>
#include<string.h>
 int main() 
 {
 	char a1[30]="hello";
    char a2[40]="mantu";
 	strcat(a1,a2);         // it is use for concatenate two string:
 	printf(" now the a1 is=%s",a1);
 	
 	return 0;
  }      */             
  
  
//------------------------------------------------------------------------
/*
#include<stdio.h>
#include<string.h>
int main() 
 { 
    char s1[12]="mantu";
    char s2[14]="kumar";
    int val;
    val=strcmp(s1,s2);         //it use to compare two strinng:
    printf("now compare value is=%d",val);
 
   return 0;
 }    */
 
 
 
                         
      
       
      
  /*  
	return 0;
} */
