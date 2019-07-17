/* Write a program to accepts name and arrival time of 5 trains and display the name with railway time format (2PM is written as 14:00). The information must be entered by the user. */
#include"../inc/header.h"
typedef struct train
{
	char train[50];
	int hr;
	int min;
	int sec;
	char ampm[5];
}trai;
void trainname(int ,trai *);
void traintime(int ,trai *);
void ampm(int ,trai *);
void trainprint(trai *);
void main()
{
	int i,j;
	trai t[5];
	system("sl");                    /*sudo apt-get install sl*/
	for(i=0;i<5;i++)
	{
		printf("................TRAIN TIME...................\n");
		system("clear");
		trainname(i,t);
		traintime(i,t);
		ampm(i,t);
	}
	trainprint(t);
}
void trainname(int j,trai *train)
{
	if(train==NULL)
	{
		printf("\nsystem error occured");
		main();
	}
	printf("\nenter train %d name : ",j+1);
	scanf("  %[^\n]s",train[j].train);
}
void traintime(int j,trai *train )
{      
	int r;
	if(train==NULL)
	{
		printf("\nsystem error occured");
		main();
	}
	printf("\nHr Mn Sec : ");
	r=scanf("%d%d%d",&train[j].hr,&train[j].min,&train[j].sec);
	if(r!=3)
	{
		printf("\nsomthing you entered wrong plese check the format : 00 00 00\n");
		printf("\n.............................................\n");
		scanf("%*s%*s%*s");
		traintime(j,train);
	} 
	else if((train[j].hr>13||train[j].hr<0)||(train[j].min>60||train[j].min<0)||(train[j].sec>60||train[j].sec<0))  /*will check numbers other than time format*/
	{
		printf("\nsomthing you entered wrong plese check the format : 00 00 00 \n");
		printf("\n.............................................\n");
		traintime(j,train);
	}
}
void ampm(int j,trai *train)
{
	if(train==NULL)
	{
		printf("\nsystem error occured");
		main();
	}
	printf("\nenter am or pm : ");
	scanf(" %s",train[j].ampm);
}
void trainprint(trai *train)
{
	if(train==NULL)
	{
		printf("\nsystem error occured");
		main();
	}
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n======================================================");
		if((strcmp("am",train[i].ampm)==0)||(strcmp("AM",train[i].ampm)==0))     /*if it is pm it will convert to 24 hr format by adding 12*/
			printf("\ntrain name : %s   train time : %d:%d:%d  %s",train[i].train,train[i].hr,train[i].min,train[i].sec,train[i].ampm);
		else
		{
			//trai[i].hr=trai[i].hr+12;
			printf("\ntrain name : %s   train time : %d:%d:%d",train[i].train,train[i].hr+12,train[i].min,train[i].sec);
		}
	}
}

