/* * @file: : Example_1_dynamic.c * * @Brief :write a program to input a list of real numbers of unknown length and output : sum and count of all positive & negative numbers. Perform the * output using following cases * a) Pointer to array * b) Pointer to Pointer * **/
#include"../inc/1_dynamic.h"
int pointerarray(float (*),int);
int pointerpointer(float **,int);
void main()
{
	int nullcheck,size,count;
        char option;;
	printf("enter how many real number you want to enter : \n");
	scanf("%d",&size);
        float *pointer[size];
        float *array=malloc(sizeof(float)*size);
	printf("\n==============================================");
	for(count=0;count<size;count++)
	{
		printf("\nenter number %d : ",count+1);
		scanf("%f",&array[count]);
		pointer[count]=&array[count];
	}
	printf("\n==============================================");
	do
	{
		printf("\nUsing...?\na)pointer to pointer\nb)pointer to an array\nc)exit program\nenter a option : ");
		scanf(" %c",&option);
		if(option=='a'||option=='A')
		{
			do
			{
				nullcheck=pointerpointer(pointer,size);
			}while(nullcheck==0);
		}
		else if(option=='b'||option=='B')
		{
			do
			{
				nullcheck=pointerarray(array,size);
			}while(nullcheck==0);
		}
                else if(option=='c'||option=='C')  
                return;
		else
		{
			printf("\nwrong choice");
		}
	}while(1);
}
int pointerpointer(float **array,int size)
{
	if(array==NULL)
	{
		printf("\nsystem error occured ");
		return 0;
	}
	int count,postive=0,negative=0;
        float sum=0;
	for(count=0;count<size;count++)
	{
		if(*array[count]<=-1)
		{
			negative++;
		}
		else
			postive++;
		sum=sum+*array[count];
	}
	printf("\npostive=%d\nnegative=%d\nsum=%f\n",postive,negative,sum);
	return 1;
}
int pointerarray(float (*array),int size)
{
	if(array==NULL)
	{
		printf("\nsystem error occured ");
		return 0;
	}
	int count,postive=0,negative=0;
	float sum=0;
	for(count=0;count<size;count++)
	{
		if(array[count]<=-1)
			negative++;
		else
			postive++;
		sum=sum+array[count];

	}
	printf("\npostive=%d\nnegative=%d\nsum=%f\n",postive,negative,sum);
	return 1;
}

