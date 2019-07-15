/*	Write a program for a matchstick game being played between the computer and a user program should ensure that the computer always wins.
 *	Rules for the game are as follows:
 *	There are 21 matchsticks.Maximum number of matchsticks a player can pick is 4.i.e The player can pick 1, 2, 3, or 4 
 *	matchsticks.After the person picks, the computer does its picking.Whoever is forced to pick up the last matchstick
 *	loses the game.
 */

#include"../inc/header.h"
int main()
{
	int matchstick=21;
	int computer,user;
	while(matchstick>=1)
	{
		system("clear");                               
		printf("\t-------Welcome to Matchstick Game-------\n");
		if(matchstick==1)
		{      
			printf("...COMPUTER WON THE GAME...\n");
			break;
		}
		printf("remaining matchstick=%d\n",matchstick);
		printf("\n---------------------------------------\n");
		while(1)
		{
			printf("\rhave to pick 1-4....\n");
			printf("\r\t user turn:");
			scanf("%d",&user);
			if(user<=0 ||user>4)                            //for numbers other than 0-4 and symbols entered display wrong pick
			{
				printf("\nWrong pick....... \n");
				continue;  
			} 
			printf("\ruser take=%d",user);
			computer=5-user;                                     //win logic 
			printf("\n\t computer turn:");
			printf("\n");
			printf("copmuter take =%d\n",computer);
			sleep(2);

			matchstick=matchstick-user-computer;
			break;
		}

	}
}
