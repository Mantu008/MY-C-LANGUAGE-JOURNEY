#include<stdio.h>
struct student{
	char name[10];
    int enr[20];
	int sem[10];
};
int main()
{
	struct student s1,s2,s3;
	
	printf("enter 1st student name:\n");
	scanf("%s",&s1.name);
	printf("enter 1st student enrolment number\n");
	scanf("%d",&s1.enr);
	printf("enter 1st student sem:\n");
    scanf("%d",&s1.sem);
	
	printf("enter 2nd student name:\n");
	scanf("%s",&s2.name);
	printf("enter 2nd student enrolment number\n");
	scanf("%d",&s2.enr);
	printf("enter 2nd student sem:\n");
	scanf("%d",&s2.sem);
	
	printf("enter 3rd student name:\n");
    scanf("%s",&s3.name);
	printf("enter 3rd student enrolment number\n");
	scanf("%d",&s3.enr);
	printf("enter 3rd student sem:\n");
	scanf("%d",&s3.sem);
    
    printf("enter 1st student name:\n",s1.enr);
	printf("enter 1st student enrolment number=%d\n",s1.enr);
	printf("enter 1st student sem:=%d\n",s1.sem);
	
    printf("enter 1st student name:\n",s2.enr);
	printf("enter 2nd student enrolment number=%d\n",s2.enr);
	printf("enter 2nd student sem:=%d\n",*s2.sem);
	
    printf("enter 1st student name:\n",s3.name);
	printf("enter 3rd student enrolment number=%d\n",s3.enr);
	printf("enter 3rd student sem:=%d\n",s3.sem);
	
	
	return 0;
	
	
}
