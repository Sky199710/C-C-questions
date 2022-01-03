// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <fstream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
	ofstream outfile;
	outfile.open("file.dat",ios::out|ios::trunc);
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
	int N;
	int max;
	int min;
	double average=0.0;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
		cout<<"Enter test times: ";
		cin>>N;
		//outfile<<"Target Distance: "<<target<<", "<<"Step Size: "<<dstep<<endl;
		for(int i=0;i<N;i++)
		{
			while (result.magval() < target)
			{
				outfile<<steps<<": "<<result<<endl;
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			if(i==0)
			{
				max=steps;
				min=steps;
				average=0.0;
			}
			else
			{
				if(max<steps)
					max=steps;
				if(min>steps)
					min=steps;
			}
			average+=steps;
			steps=0;
			result.reset(0.0,0.0);
		}
		average/=N;
		cout<<"After "<<N<<" tests, the max is: "<<max<<" steps"
			<<", the minimum is: "<<min<<" steps"
			<<", the average is: "<<average<<" steps."<<endl;
        cout << "Enter target distance (q to quit): ";

    }
    cout << "Bye!\n";
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
