/* manydice.c -- multiple dice rolls                    */
/* compile with diceroll.c                              */
#include <stdio.h>
#include <stdlib.h>              /* for library srand() */
#include <time.h>                /* for time()          */
#include "diceroll.h"            /* for roll_n_dice()   */
/* and for roll_count  */
int main(void)
{
    int dice,roll;
    int sets,sides;
    int status;
    
    srand((unsigned int) time(0)); /* randomize seed      */
    printf("Enter the number of sets; enter q to stop.\n");
    while (scanf("%d", &sets) == 1)
    {
        printf("How many sides and how many dice?\n");
        if ((status =scanf("%d %d", &sides,&dice)) != 2)
        {
            if (status == EOF)
                break;             /* exit loop           */
            else
            {
                printf("You should have entered an integer.");
                printf(" Let's begin again.\n");
                while (getchar() != '\n')
                    continue;     /* dispose of bad input */
                printf("How many sets? Enter q to stop.\n");
                continue;         /* new loop cycle       */
             }
        }
        printf("Here are %d sets of %d %d-sided throws.\n ",sets,dice,sides);
		for(int i=0;i<sets;i++)
		{
			roll=roll_n_dice(dice,sides);
			printf("%d ",roll);
			if((i+1)%15==0)
			printf("\n ");
		}
		printf("\nHow many sets? Enter q to stop: ");
	}
}
