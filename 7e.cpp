//Chapter 7 Exercises
// 7e.cpp


//3
# include <iostream>

void f3(int arr3 [], int length, int value);
void f3(int arr3 [], int length, int value)
{
	for (int i = 0; i < length; i++)
	{
		arr3[i] = value;
	}
}

//4
void f4(int * begin, int * end, int value);
void f4(int * begin, int * end, int value)
{
	for (int *pt = begin; pt != end; pt++)
	{
		* pt = value;
	}
}



void show_array(const int arr[], int n);
void show_array(const int arr[], int n)
{
	using namespace std;
	for (int i = 0; i< n; i++)
	{
		cout << "array # ["<< i << "]: ";
		cout << arr[i] << endl;
	}

}

double f5(const double arr[], int length);//return the max element in an array
double f5(const double arr[], int length)
{
	using namespace std;
	double max;
	max = arr[0];
	for (int i = 1; i < length; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		cout << "max:" << max << endl;
		cout << "arr["<< i << "]:" << arr[i] << endl;
	}
	return max;
}


int replace(char *str, char c1, char c2);
int replace(char *str, char c1, char c2)
{
	using namespace std;
	int num = 0;
	for (int i = 0; str[i]!='\0'; i++) //  '\0' is the end of a string constant
	{
		cout <<"str[" << i << "]: "<< str[i] << endl;
		if (str[i] == c1)
		{
			str[i] = c2;
			num ++;
		}
	}
	return num;
}



const int ArSize = 8;

struct applicant{
	char name[30];
	int credit_ratings[3];
};

void show_app_1(applicant app);
void show_app_1(applicant app)
{
	using namespace std;
	cout << app.name << endl;
	for (int i = 0; i < 3; i++)
		cout << app.credit_ratings[i] << endl;
}


void show_app_2(applicant * apptr);
void show_app_2(applicant * apptr)
{
	using namespace std;
	cout << apptr->name << endl;
	for (int i = 0; i < 3; i++)
		cout << apptr->credit_ratings[i] << endl;
}




void f1(applicant * a);
const char * f2(const appl;icant * a1, const applicant * a2);


typedef void(*p_f1)(applicant *) ;
p_f1 p1 = f1;

typedef const char * (*p_f2)(const applicant *, const applicant *) = f2;
p_f2 p2 = f2;

p_f1 ap[5];
p_f2 pa[10];





int main()
{
	using namespace std;
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};



	/*
	f4(cookies, cookies+ArSize, 7);
	cout << "cookies after f4:\n ";
	show_array(cookies, ArSize);
	*/

	/*
	double depth[ArSize] = {1.0, 3.14, 2.71, 1.68, 1.98, 8.18, 7.14};
	double max = f5(depth, ArSize);
	cout << "The max element in Array depth is: " << max << endl;
	*/

	/*
	char str_8[ArSize] = "celleze";
	int num = replace(str_8, 'e', 'a');
	cout << "Replaced for "<< num << " times.\n";
	cout << str_8 << endl;
	*/

	applicant Thu{"Yuketang", {1, 2, 3}};
//	show_app_1(Thu);
	show_app_2(&Thu);
	return 0;
}



