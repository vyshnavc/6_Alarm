/** 
 *	@file: : Example_1_2D_array_search.c	
 *	
 *	@Brief : Program to get and store a list of names in a 2D array.
 *	Then ask user to input a name and search that name in the 2D ar ray using
 *	a) array of pointer
 *	b) pointer to array
 *	Both a & b are part of same program.
 *	Note: For searching name, use appropriate string library function.
 *
 *
 */
#include"../inc/header.h"
#define colm 50
void pointerarray(char (*)[50],int,char *);
void main()
{
	int row,count;
	printf("enter how many names you wan to enter : \n");
	scanf("%d",&row);
	int test=0;
	char name[row][colm],option,sname[50],*array[row];
	printf("\n==============================================");
	for(count=0;count<row;count++)
	{
		printf("\nenter name %d : ",count+1);
		scanf(" %s",name[count]);
		array[count]=name[count];
	}
	printf("\n==============================================");
	printf("\nenter a name to search :\n");
	scanf("%s",sname);
	printf("\n===============================================");
        printf("\nsearching method......\n");
	printf("a)array of pointer\nb)pointer to an array\nenter a option : ");
	scanf(" %c",&option);
	if(option=='a'||'A')
	{
		for(count=0;count<row;count++)
		{
			if(strcmp(array[count],sname)==0)
			{
				test=1;
				printf("\n%s found at position %d\n",sname,count+1);
			}
		}
		if(test!=1)
			printf("\nstring is not present in the array");
	}
	else if(option=='b'||'B')
		pointerarray(name,row,sname);
	else
	{
		printf("\nwrong choice");
	}
}
void pointerarray(char (*name)[50],int row,char *sname)
{
        if(name==NULL&&sname==NULL)
        {
         printf("\nsystem error occured ");
         main();
        }
	int count,test=0;
	for(count=0;count<row;count++)
	{
		if(strcmp(name[count],sname)==0)
		{
			test=1;
			printf("\n%s found at position %d\n",sname,count+1);
		}
	}
	if(test!=1)
		printf("\nstring %s is not present in the array",sname);
}
