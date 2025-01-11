//12.6.cpp

// bank.cpp -- using the Queue interface
// compile with queue.cpp
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>
// for time()
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
std::srand(std::time(0));
//random initializing of rand()

/*
cout << "Case Study: Bank of Heather Automatic Teller\n";
cout << "Enter maximum size of queue: ";
int qs;
cin >> qs;
Queue line(qs);
// line queue holds up to qs people
cout << "Enter the number of simulation hours: ";
int hours;
// hours of simulation
cin >> hours;
// simulation will run 1 cycle per minute
long cyclelimit = MIN_PER_HR * hours; // # of cycles
cout << "Enter the average number of customers per hour: ";
double perhour;
// average # of arrival per hour


cin >> perhour;
double min_per_cust;
// average time between arrivals
*/


int qs = 10;
Queue line_1(qs);
Queue line_2(qs);
int hours = 100;
long cyclelimit = MIN_PER_HR * hours; // # of cycles
double perhour;
double min_per_cust;


Item temp;
long turnaways = 0;
long customers = 0;
long served_1 = 0;
long served_2 = 0;
long sum_line_1 = 0;
long sum_line_2 = 0;
int wait_time_1 = 0;
int wait_time_2 = 0;
long line_wait_1 = 0;
long line_wait_2 = 0;
//
//

int which_line;
perhour = 30; //initialize value
while(perhour > 0)
{
	min_per_cust = MIN_PER_HR / perhour;
// running the simulation
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust)) // have newcomer
		{
		//if (line_1.isfull())
		if ((line_1.isfull()) && (line_2.isfull())) // both lines are full
			turnaways++;
		else
		{
			customers++;
			temp.set(cycle);
			// cycle = time of arrival
		//int which_line;
		if (line_1.queuecount() <= line_2.queuecount())
		{
			line_1.enqueue(temp); // add newcomer to line
			which_line = 1;
		}
		else
		{
			line_2.enqueue(temp);
			which_line = 2;
		}
		}
		}

//if (wait_time <= 0 && !line.isempty())
	if (which_line == 1)
	{
		if (wait_time_1 <= 0 && !line_1.isempty())
		{
		line_1.dequeue (temp);
// attend next customer
		wait_time_1 = temp.ptime(); // for wait_time minutes
		line_wait_1 += cycle - temp.when();
		served_1++;
		}
		if (wait_time_1 > 0)
		wait_time_1--;
		sum_line_1 += line_1.queuecount();
	}
	else if (which_line == 2)
	{
		if (wait_time_2 <= 0 && !line_2.isempty())
		{
		line_2.dequeue (temp);
	// attend next customer
		wait_time_2 = temp.ptime(); // for wait_time minutes
		line_wait_2 += cycle - temp.when();
		served_2++;
		}
		if (wait_time_2 > 0)
		wait_time_2--;
		sum_line_2 += line_2.queuecount();
	}
	}
// reporting results
if (customers > 0)
{
cout << "customers accepted: " << customers << endl;
cout << " customers served: " << served_1 + served_2 << endl;
cout << "turnaways: " << turnaways << endl;
cout << "average queue size: ";
cout.precision(2);
cout.setf(ios_base::fixed, ios_base::floatfield);


cout << (double) (sum_line_1 + sum_line_2 )/ cyclelimit << endl;
cout << " average wait time: "<< (double) (line_wait_1 + line_wait_2) / (served_1+served_2) << " minutes\n";
}
else
cout << "No customers!\n";
cout << "Done!\n";

if (((double)(line_wait_1+line_wait_2)/(served_1+served_2)) <= 1)
	break;
--perhour;
}

cout << "The number of customers arrived per hour should be: ";
cout << perhour++ << std::endl;

return 0;
}
// x = average time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x)
{
return (std::rand() * x / RAND_MAX < 1);
}
