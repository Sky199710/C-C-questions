/* rain.c  -- finds yearly totals, yearly average, and monthly
 average for several years of rainfall data */
#include <stdio.h>
#define MONTHS 12    // number of months in a year
#define YEARS   5    // number of years of data
float sum_year(const float [][12], int );
void sum_month(const float [][12], int );
int main(void)
{
    // initializing rainfall data for 2010 - 2014
    const float rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    int year, month;
    float subtot, total;
    
    printf(" YEAR    RAINFALL  (inches)\n");
    total = sum_year(rain,5);
    printf("\nThe yearly average is %.1f inches.\n\n",
           total/YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf(" Nov  Dec\n");
    
    
    sum_month(rain,5);
	printf("\n");
    return 0;
}

float sum_year(const float ar[][12], int n)
{
	float total=0;
	for(int year=0;year<n;year++)
	{
		float subtot=0;
		for(int month=0;month<12;month++)
			subtot+=ar[year][month];
		printf("%5d %15.1f\n", 2010+year,subtot);
		total+=subtot;
	}
	return total;
}
void sum_month(const float ar[][12], int n)
{
	float subtot=0;
	for(int month=0;month<12;month++)
	{
		for(int year=0;year<n;year++)
			subtot+=ar[year][month];
		printf("%4.1f ", subtot/YEARS);
	}
}
