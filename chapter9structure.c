/*
#include<stdio.h>
#include<string.h>
struct student{
	
	int roll;
	char name[20];
	float corseduration;
};
int main()
{
		struct student s1;
		s1.roll=001;
		s1.corseduration=4.5;
		strcpy(s1.name,"mantu");
		printf("%d\n",s1.roll);
		printf("%s\n",s1.name);
		printf("%f\n",s1.corseduration);
	return 0; 
}    */

//QQ.wap to store the detail of 3 employee from user difined data use the struct decilerd avove.
/*
#include<stdio.h>
#include<string.h>
struct employee{
	
	int code;
	char name[20];
	float salery;
};
int main()
{
		struct employee e1,e2,e3;
		printf("enter code of employee 1:");
		scanf("%d",&e1.code);
		printf("enter salary of employee 1:");
		scanf("%f",&e1.salery);
		printf("enter name of employee 1:");
		scanf("%s",e1.name);
		
		printf("enter code of employee 2:");
		scanf("%d",&e2.code);
		printf("enter salary of employee 2:");
		scanf("%f",&e2.salery);
		printf("enter name of employee 2:");
		scanf("%s",e2.name);
		
		printf("enter code of employee 3:");
		scanf("%d",&e3.code);
		printf("enter salary of employee 3:");
		scanf("%f",&e3.salery);
		printf("enter name of employee 3:");
		scanf("%s",e3.name);
		
		printf("name of 1st employee=%s\n",e1.name);
		printf("code of 1st employee=%d\n",e1.code);
		printf("salery of 1st employee=%f\n",e1.salery);
		
		printf("name of 2nd employee=%s\n",e2.name);
		printf("code of 2nd employee=%d\n",e2.code);
		printf("salery of 2nd employee=%f\n",e2.salery);
		
		printf("name of 3rd employee=%s\n",e3.name);
		printf("code of 3rd employee=%d\n",e3.code);
		printf("salery of 3rd employee=%f\n",e3.salery);
		
		
	return 0; 
}                       */


/*
#include<stdio.h>
#include<string.h>
struct employee{
	
	int code;
	char name[20];
	float salery;
};
int main()
{
		struct employee facebook[100];    // (an array of structure)  structure of 100 employe in facebook datatype;
		 
	    strcpy(facebook[0].name,"mantu");                                
		facebook[0].code=100;
		facebook[0].salery=20500;
		
		strcpy(facebook[1].name,"raju");                                
		facebook[1].code=101;
		facebook[1].salery=30000;
		
		strcpy(facebook[2].name,"ajay");                                
		facebook[2].code=102;
		facebook[2].salery=30500;
		
		strcpy(facebook[3].name,"razi");                                
		facebook[3].code=103;
		facebook[3].salery=38000;
		
		strcpy(facebook[4].name,"ashish");                                
		facebook[4].code=104;
		facebook[4].salery=40000;
		
		printf("name of 1st employee=%s\n",facebook[0].name);
		printf("code of 1st employee=%d\n",facebook[0].code);
		printf("salery of 1st employee=%f\n",facebook[0].salery);
		
		printf("name of 2nd employee=%s\n",facebook[1].name);
		printf("code of 2nd employee=%d\n",facebook[1].code);
		printf("salery of 2nd employee=%f\n",facebook[1].salery);
		
		printf("name of 3rd employee=%s\n",facebook[2].name);
		printf("code of 3rd employee=%d\n",facebook[2].code);
		printf("salery of 3rd employee=%f\n",facebook[2].salery);
		
		printf("name of 4th employee=%s\n",facebook[3].name);
		printf("code of 4th employee=%d\n",facebook[3].code);
		printf("salery of 4th employee=%f\n",facebook[3].salery);
		
		printf("name of 5th employee=%s\n",facebook[4].name);
		printf("code of 5th employee=%d\n",facebook[4].code);
		printf("salery of 5th employee=%f\n",facebook[4].salery);
		
		return 0;
		
}          */              
 /*
#include<stdio.h>
struct employee{
	
	int code;
    float salery;
	char name[20];
};
int main()
{
		struct employee mantu={101,20.5,"mantu"};
		printf("code is=%d\n",mantu.code);
		printf("salery is=%f\n",mantu.salery);
		printf("name is=%s\n",mantu.name);
		
		return 0;
}
*/

// pointer to structure
/*
#include<stdio.h>
#include<string.h>
struct employee{
	
	int code;
	char name[20];
	float salery;
};
int main()
{
		struct employee e1;
		struct employee*ptr;
		ptr=&e1;
	//	(*ptr).code=101;
	     ptr->code=101;               //we can also write this and this is a right way
		printf("%d",(*ptr).code);    // 	printf("%d",e1.code);
		
		return 0;		
}                          */
/*
#include<stdio.h>
#include<string.h>
struct employee{
	
	int code;
	float salery;
	char name[20];
};
void show(struct employee e1);
int main()
{
		struct employee e1;
		struct employee*ptr;
		ptr=&e1;
		ptr->code=102;
		ptr->salery=30.7;
	    strcpy(ptr->name,"mantu");
	    show(e1);
		printf("the code of employee is:%d\n",e1.code);   //here code is not change.
		
		return 0;
}
void show(struct employee e1)
{
	printf("the code of employee is:%d\n",e1.code);
	printf("the salery of employee is:%f\n",e1.salery);
	printf("the name of employee is:%s\n",e1.name);
	
	e1.code=888;
	
}                    */

/*
#include<stdio.h>
#include<string.h>
typedef struct employee{
	
	int code;
	float salery;
	char name[20];
}emp;
void show(emp e1);
int main()
{
	  // decalring e1 and ptr
		emp e1;
		emp*ptr;
		//pointing ptr to e1
		ptr=&e1;
		
		ptr->code=102;
		ptr->salery=30.7;
	    strcpy(ptr->name,"mantu");
	    show(e1);
		return 0;
}
void show(emp e1)
{
	printf("the code of employee is:%d\n",e1.code);
	printf("the salery of employee is:%f\n",e1.salery);
	printf("the name of employee is:%s\n",e1.name);
		
}       */             


   
