#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include "cardplayer.h"
using namespace std;
const int SIZE = 3;

int main()
{
	Person * ps[SIZE];

	int ct;
	for(ct=0;ct<SIZE;ct++)
	{
		char choice;
		cout<<"Enter the person category:\n"
			<<"g: gunslinger p:poker player "
			<<"b: bad dude q:quit\n";
		cin>>choice;
		while(strchr("gpbq", choice)==NULL)
		{
			cout<<"Please enter a g, p, b, or q: ";
			cin>>choice;
		}
		if(choice=='q')
			break;
		switch(choice)
		{
		case 'g': ps[ct] = new Gunslinger;
			break;
		case 'p': ps[ct] = new PokerPlayer;
			break;
		case 'b': ps[ct] = new BadDude;
			break;
		}
		cin.get();
		ps[ct]->Set();
	}
	cout<<"\nHere is your character:\n";
	int i;
	for(i=0;i<ct;i++)
	{
		cout<<endl;
		ps[i]->Show();
	}
	for(i=0;i<ct;i++)
		delete ps[i];
	cout<<"Bye!\n";
	return 0;
}
