/*************************************************************************
	> File Name: 3.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 20 Jun 2021 01:32:21 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define DEG_TO_RAD ((4*atan(1))/180)

typedef struct polar_v{
	double magnitude;
	double angle;
}Polar_V;

typedef struct rect_v{
	double x;
	double y;
}Rect_V;

Rect_V polar_to_rect(Polar_V);

int main(void)
{
	Polar_V input;
	Rect_V result;

	puts("Enter magnitude and angle; enter q to quit:");
	while(scanf("%lf %lf",&input.magnitude,&input.angle)==2)
	{
		result=polar_to_rect(input);
		printf("x=%0.2f, y=%0.2f\n",
				result.x,result.y);
	}
	puts("bye.");
	return 0;
}
Rect_V polar_to_rect(Polar_V pv)
{
	Rect_V rv;

	rv.x=pv.magnitude*cos(DEG_TO_RAD*pv.angle);
	rv.y=pv.magnitude*sin(DEG_TO_RAD*pv.angle);
	return rv;
}
