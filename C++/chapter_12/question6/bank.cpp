// bank.cpp -- using the Queue interface
// compile with queue.cpp
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
// setting things up
    std::srand(std::time(0));    //  random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line1(qs);         // line queue holds up to qs people
	Queue line2(qs);

    cout << "Enter the number of simulation hours: ";
    int hours;              //  hours of simulation
    cin >> hours;
    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours; // # of cycles

    cout << "Enter the average number of customers per hour: ";
    double perhour;         //  average # of arrival per hour
    cin >> perhour;
    double min_per_cust;    //  average time between arrivals
    min_per_cust = MIN_PER_HR / perhour;

    Item temp1,temp2;              //  new customer data
    long turnaways = 0;     //  turned away by full queue
    long customers1 = 0;     //  joined the queue
	long customers2 = 0;
	long len1 = 0;
	long len2 = 0;
	int flag = 0;
    long served = 0;        //  served during the simulation
    long sum_line = 0;      //  cumulative line length
    int wait_time1 = 0;      //  time until autoteller is free
	int wait_time2 = 0;
    long line_wait = 0;     //  cumulative time in line


// running the simulation
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))  // have newcomer
        {
            if (line1.isfull()&&line2.isfull())
                turnaways++;
            else
            {
				if(len1<=len2)
				{
					customers1++;
					len1++;
					temp1.set(cycle);
					line1.enqueue(temp1);
					flag=0;
				}
				else
				{
					customers2++;
					len2++;
					temp2.set(cycle);
					line2.enqueue(temp2);
					flag=1;
				}
            }
        }
		if (wait_time1 <= 0 && !line1.isempty())
		{
			line1.dequeue (temp1);      // attend next customer
			wait_time1 = temp1.ptime(); // for wait_time minutes
			line_wait += cycle - temp1.when();
			served++;
			len1--;
		}
		if (wait_time1 > 0)
			wait_time1--;
		sum_line += line1.queuecount();
		if (wait_time2 <= 0 && !line2.isempty())
		{
			line2.dequeue (temp2);      // attend next customer
			wait_time2 = temp2.ptime(); // for wait_time minutes
			line_wait += cycle - temp2.when();
			served++;
			len2--;
		}
		if (wait_time2 > 0)
			wait_time2--;
		sum_line += line2.queuecount();
		
    }

// reporting results
    if (customers1+customers2 > 0)
    {
        cout << "customers accepted: " << customers1+customers2 << endl;
        cout << "  customers served: " << served << endl;
        cout << "         turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << " average wait time: "
             << (double) line_wait / served << " minutes\n";
    }
    else
        cout << "No customers!\n";
    cout << "Done!\n";
    // cin.get();
    // cin.get();
    return 0;
}

//  x = average time, in minutes, between customers
//  return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1); 
}
