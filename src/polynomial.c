/*Write a program for polynomial addition, subtraction, and multiplication. Use dynamic memory allocation to take in the polynomial enetred by the user.*/

#include"../inc/polynomial.h"
int display(int *,int);
int addition(int *,int *,int *,int);
int subtraction(int *,int *,int *,int);
int multiplication(int *,int *,int *,int);
void main()
{
	printf("\n==========polynomial addition===========");
	printf("\n\nplease follow the instruction {5,0,-3,2} = 2x^3-3x^2+5");
	int *p,*p2,*p3,i,size,check,num1,num2;
	char choice;
	do
	{
		printf("\n\nenter total number for 1st polynomial function : ");
		check=scanf("%d",&num1);
		if(check==0)
		{
			scanf("%*s");
			printf("\nwrong input");
		}
	}while(check==0);

	p=malloc(sizeof(int)*num1);

	for(i=0;i<num1;i++)
	{
		printf("\n\nenter number : ");
		check=scanf("%d",&p[i]);
		if(check==0)
		{
			printf("\nwrong input..enter again..");
			scanf("%*s");
			i--;
			continue;
		}
		system("clear");
		display(p,i);
	}
	do
	{
		printf("\nenter total number for 2nd polynomial function : ");
		check=scanf("%d",&num2);
		if(check==0)
		{
			scanf("%*s");
			printf("\nwrong input");
		}
	}while(check==0);

	p2=malloc(sizeof(int)*num2);
	size=num1>num2?num1:num2;
	p3=malloc(sizeof(int)*size);        

	for(i=0;i<num2;i++)
	{
		printf("\n\nenter number : ");
		check=scanf("%d",&p2[i]);
		if(check==0)
		{
			printf("\nwrong input..enter again..");
			scanf("%*s");
			i--;
			continue;
		}
		system("clear");
		display(p2,i);
	}
	       printf("\n");
               system("clear");
	while(1)
	{
          	printf("\nA)addition\nB)subtraction\nC)multiplication\nX)exit\nenter a choice : ");
		scanf(" %c",&choice);
		switch(choice)
		{
			case 'A':
				addition(p,p2,p3,size);
				printf("\n");
				system("clear");
				display(p,num1);
				printf("  +\n\n");
				display(p2,num2);
				printf("\n\n---------------------------------\n");
				display(p3,size);
				break;
			case 'B':
				subtraction(p,p2,p3,size);
				printf("\n");
				system("clear");
				display(p,num1);
				printf("  +\n\n");
				display(p2,num2);
				printf("\n\n---------------------------------\n");
				display(p3,size);
				break;
			case 'C':
				multiplication(p,p2,p3,size);
				printf("\n");
				system("clear");
				display(p,num1);
				printf("  +\n\n");
				display(p2,num2);
				printf("\n\n---------------------------------\n");
				display(p3,size);
                                break;
			case 'X':return;
			default:
				 printf("\nwrong choice");
		}
	} 
}
int addition(int *p,int *p2,int *p3,int size)
{
	int count;
	for(count=0;count<size;count++)
	{
		p3[count]=p[count]+p2[count];
	}
}
int subtraction(int *p,int *p2,int *p3,int size)
{
	int count;
	for(count=0;count<size;count++)
	{
		p3[count]=p[count]-p2[count];
	}
}
int multiplication(int *p,int *p2,int *p3,int size)
{
	int count;
	for(count=0;count<size;count++)
	{
		p3[count]=p[count]*p2[count];
	}
}
int display(int *p,int size)
{
	int count;
	for(count=size;count>=0;count--)
	{
		if(p[count]==0)
			continue;
		else
		{
			if(p[count]>0)
				printf("+");
			printf("%d",p[count]);
			if(count!=0)
				printf("x^%d",count);
		}
	}
}

















