#include<stdio.h>
int main()
{
	int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    
    switch(marks/10)
    {
    	case 10:
    	case 9:
    	printf("grade A");
    	break;
    	case 8:
    	printf("grade B");
    	break;
    	case 7:
    	printf("grade C");
    	break;
    	case 6:
    	printf("grade D");
    	break;
    	default:
    	  printf("grade F");
	}
}
