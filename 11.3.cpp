//11.3.cpp 

// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>
// rand(), srand() prototypes
#include <ctime>
// time() prototype
#include "vect.h"

#define  MAX 999999 

int main()
{
using namespace std;
using VECTOR::Vector;
srand(time(0));
// seed random-number generator
double direction;
Vector step;
Vector result(0.0, 0.0);
unsigned long steps = 0;
double target;
double dstep;

unsigned long total_steps = 0;
unsigned long avg_steps;
unsigned max_steps = 0;
unsigned min_steps = MAX;
int test_round = 0;

//ofstream outFile;
//outFile.open("11.1.txt");

cout << "Enter target distance (q to quit): ";
while (cin >> target)
{
cout << "Enter step length: ";
if (!(cin >> dstep))
break;

// record the distance and step lenth
//outFile << "Target Distance: " << target << ", Step SIze: "<< dstep << endl;



while (result.magval() < target)
{
direction = rand() % 360;
step.reset(dstep, direction, Vector::POL);

result = result + step;

// record the location
//outFile << step << ": " << result << endl;
steps++;
}


cout << "After " << steps << " steps, the subject "
"has the following location:\n";
cout << result << endl;

total_steps += steps;

++test_round;
//if(steps > max_steps)

steps > max_steps? max_steps = steps : min_steps = steps;


// record the result of rec mode
//outFile << "After " << steps << " steps, the subject "
"has the following location:\n";
//outFile << result << endl;

result.polar_mode();
cout << " or\n" << result << endl;
cout << "Average outward distance per step = "
<< result.magval()/steps << endl;


// record the result of ploar mode
//outFile << " or\n" << result << endl;
//outFile << "Average outward distance per step = "
//<< result.magval()/steps << endl;


steps = 0;
result.reset(0.0, 0.0);

cout << "Enter target distance (q to quit): ";
}
cout << "Bye!\n";
cin.clear();
while (cin.get() != '\n')
continue;

avg_steps = total_steps / test_round;

cout << "The maximum steps is: " << max_steps << endl;
cout << "The minimum steps is: " << min_steps << endl;
cout << "The average steps is: " << avg_steps << endl;
//outFile.close();

return 0;
}


