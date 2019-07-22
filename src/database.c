/**
 * * Advance C assignment question 2.
 * * Write a program to create a student database.
 * * The fields in the database will be Student ID, name, address, class, age, sex etc.The number of entries are variable also the fields name & address are char , which needs to be allocated dynamically as per the number of characters needed.
 * * Then the user should be able to find the details of any particular student based on the ID/name
 * */
#include"../inc/header.h"
typedef struct student
{
	int studentID;
	char name[50];
	char address[100];
	char class[10];
	int age;
	char sex[5];
	struct student *next;
}student;
void database(student**);
void searchbyname(student *);
void searchbyID(student *);
void print(student *);
void main()
{
	student *hptr=0;
	char c;
	printf("\n====================student data base===================");
	do
	{       
		system("clear");
		database(&hptr);
		printf("\ndo you want to continue y/n : ");
		scanf(" %c",&c);
	}while(c=='y'||c=='Y');
	do
	{       
		system("clear");
		printf("\nsearching method.....\nA)using name\nB)using student ID\nX)print all and exit\nenter a option : ");
		scanf(" %c",&c);
		if(c=='a'||c=='A')
			searchbyname(hptr);
		else if(c=='b'||c=='B')
			searchbyID(hptr);
		else if(c=='x'||c=='X')
			print(hptr);
		else
		{
			printf("\nwrong choice...try again");
			continue;
		}
		sleep(2);
	}while(c!='x'&&c!='X');
}
void database(student **ptr)
{       
	if(ptr==NULL)
	{
		printf("\nsystem error occured..");
		main();
	}
	int r,r1;
	student *last;
	student *temp=(student*)malloc(sizeof(student));
	printf("\nenter student ID : ");
	r=scanf("%d",&temp->studentID);
	if(r!=1)
	{
		printf("\nwrong input try again..");
		scanf("%*s");
		free(temp);
		database(ptr);
	}
	printf("\nenter student age : ");
	r1=scanf("%d",&temp->age);
	if(r1!=1)
	{
		printf("\nwrong input try again..");
		scanf("%*s");
		free(temp);
		database(ptr);
	}
	printf("\nenter student name : ");
	scanf(" %[^\n]s",temp->name);
	printf("\nenter student address : ");
	scanf(" %[^\n]s",temp->address);
	printf("\nenter student class : ");
	scanf(" %s",temp->class);
	printf("\nenter sex - male/female : ");
	scanf(" %s",temp->sex);
	if(*ptr==0)
		*ptr=temp;
	else
	{
		last=*ptr;
		while(last->next!=0)
			last=last->next;
		last->next=temp;
	}
}
void searchbyname(student *name)
{
	if(name==NULL)
	{
		printf("\nsystem error occured..");
		main();
	}

	int check=0;
	char sname[50];
	student *test=name;
	printf("\nenter the name: ");
	scanf(" %[^\n]s",sname);
	while(test!=0)
	{
		if(strcmp(test->name,sname)==0)
		{
			check=1;
			printf("\n%d\n%s\n%d\n%s\n%s\n%s",test->studentID,test->name,test->age,test->address,test->class,test->sex);
		}
		test=test->next;
	}
	if(check==0)
		printf("\nname not found......");
}
void searchbyID(student *ID)
{
	if(ID==NULL)
	{
		printf("\nsystem error occured..");
		main();
	}
	int check=0,s_id;
	student *test=ID;
	printf("\nenter the student id: ");
	scanf("%d",&s_id);
	while(test!=0)
	{
		if(test->studentID==s_id)
		{
			check=1;
			printf("\n%d\n%s\n%d\n%s\n%s\n%s",test->studentID,test->name,test->age,test->address,test->class,test->sex);
		}
		test=test->next;
	}
	if(check==0)
		printf("\nstudent ID not found......");
}
void print(student *ptr)
{
	if(ptr==NULL)
	{
		printf("\nsystem error occured..");
		main();
	}
	while(ptr!=0)
	{         
		printf("\n===========================================");
		printf("\n%d\n%d\n%s\n%s\n%s\n%s",ptr->studentID,ptr->age,ptr->name,ptr->address,ptr->class,ptr->sex);
		ptr=ptr->next;
	}
}
