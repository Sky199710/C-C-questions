/*************************************************************************
	> File Name: 15.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 25 Nov 2020 07:23:39 PM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	float Daphne=100;
	float Deirdre=100;
	int i=0;
	do
	{	
		Daphne+=10;
		Deirdre*=1.05;
		i++;
	}while(Daphne>=Deirdre);
	printf("%d年后Deirdre的投资额大于Daphne,两人的投资额分别为%f %f\n",i,Deirdre,Daphne);
	
}
