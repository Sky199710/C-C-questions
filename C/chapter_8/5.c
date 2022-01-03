/* guess.c -- an inefficient and faulty number-guesser */
#include <stdio.h>
int main(void)
{
	char ch;
    int guess = 50;
	int lower = 1;
	int higher = 100;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\na h if my guess is higher, a l if it is lower.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((ch=getchar()) != 'y')      /* get response, compare to y */
	{   
		if (ch=='\n')
			continue;
		else if (ch!='h'&&ch!='l')
		{
			printf("I can't understand, please type 'h' or 'l'");
			continue;
		}
		else if (ch=='h')
		{
			higher=guess;
			guess=(lower+guess)/2;
		}
		else
		{
			lower=guess;
			guess=(higher+guess+1)/2;
		}
        printf("Well, then, is it %d?\n", guess);
	}
    printf("I knew I could do it!\n");
    
    return 0;
}
