//16.6.cpp

// bank.cpp -- using the Queue interface
// compile with queue.cpp
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>
#include <queue>

// for time()
//#include "queue.h"


class Customer
{
private:
long arrive;
// arrival time for customer
int processtime;
// processing time for customer
public:
Customer() { arrive = processtime = 0; }
void set(long when);
long when() const { return arrive; }
int ptime() const { return processtime; }
};
void Customer::set(long when)
{
processtime = std::rand() % 3 + 1;
arrive = when;
}

typedef Customer Item;

const int MIN_PER_HR = 60;
bool newcustomer(double x); // is there a new customer?
int main()
{
using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
using std::queue;
// setting things up
std::srand(std::time(0));
//random initializing of rand()
cout << "Case Study: Bank of Heather Automatic Teller\n";
cout << "Enter maximum size of queue: ";
int qs;
cin >> qs;
//Queue line(qs);

queue <Item> line;


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
min_per_cust = MIN_PER_HR / perhour;
Item temp;
long turnaways = 0;
long customers = 0;
long served = 0;
long sum_line = 0;
int wait_time = 0;
long line_wait = 0;
//new customer data
//turned away by full queue
//joined the queue
//served during the simulation
//cumulative line length
//time until autoteller is free
//cumulative time in line
// running the simulation
for (int cycle = 0; cycle < cyclelimit; cycle++)
{
if (newcustomer(min_per_cust)) // have newcomer
{
//if (line.isfull())

if(line.size() == qs)
turnaways++;
else
{
customers++;
temp.set(cycle);
// cycle = time of arrival
//line.enqueue(temp); // add newcomer to line
line.push(temp);
}
}

//if (wait_time <= 0 && !line.isempty())

if (wait_time <= 0 && !line.empty())
{
//line.dequeue (temp);
line.pop();

// attend next customer
wait_time = temp.ptime(); // for wait_time minutes
line_wait += cycle - temp.when();
served++;
}
if (wait_time > 0)
wait_time--;

//sum_line += line.queuecount();
sum_line += line.size();

}
// reporting results
if (customers > 0)
{
cout << "customers accepted: " << customers << endl;
cout << " customers served: " << served << endl;
cout << "turnaways: " << turnaways << endl;
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
return 0;
}
// x = average time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x)
{
return (std::rand() * x / RAND_MAX < 1);
}
