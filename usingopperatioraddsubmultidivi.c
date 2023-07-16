#include<stdio.h>
#include<math.h >
int main()
{
  int a=24,b=6;
  int z;
  //z=a+b; liggle
  //a+b=z; illigal 
	printf("addition=%d\nsubtrsction=%d\n%d=multiplication\n%d=div\n",a+b,a-b,a*b,a/b);
	
		printf("when 5 divided by 2 leaves a rimainder of=%d\n",5%2);
		
		printf("when -5 divided by 2 leaves a rimainder of=%d\n",-5%2);
		
		printf("when 5 divided by -2 leaves a rimainder of %d\n",5%-2);
		
		
		 
		//no operatore is asumed to be present
		//printf("the value of 4*5",(4)(5));--will not perform
		printf("the value of 4*5=%d\n",(4)*(5));
		
		
		
		//there are no opretur to perfurm exponentiation in c
		//printf("the value of 4^5 is %d\n",4^5);---will not perform
		printf("the value of 4 to the power 5 is=%f\n",pow(2,5));
		
 return 0; 
}
