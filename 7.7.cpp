//7.7.cpp
#include <iostream>

using namespace std;

const int ArSize = 10;

double * Fill_array(double * arr, int n);
void Show_array(double * arr_begin, double * arr_end);
void Reverse_array(double arr[], int n);

double * Fill_array(double * arr, int n)
{
	double * arr_ptr;
	cout << "Please enter the value of elements in data type double: \n";
	for(arr_ptr = arr; arr_ptr < arr + n; arr_ptr++)
	{
		if (!(cin >> *arr_ptr))
			break;
	}	
	return arr_ptr;
}


void Show_array(double * arr_begin, double * arr_end)
{
	double * arr_ptr;
	cout << "The elements of array are: \n";
	//for(int i = 0; i < n; i++)
	int i = 0;
	for(arr_ptr = arr_begin, i = 0; arr_ptr < arr_end; arr_ptr++)
		cout << "arr[" << i << "] = "<< *arr_ptr << endl;
	

}


void Reverse_array(double * arr_begin, double * arr_end)
{
	double temp;
	int n = arr_end - arr_begin;
	for (int i = 0; i < (n/2); i++)
	{
		temp = *(arr_begin+i);
		*(arr_begin+i) = *(arr_begin+n-i-1);
		*(arr_begin+n-i-1) = temp;
	 }
}

int main()
{
	double array[ArSize];
	double * arr_end;
    arr_end = Fill_array(array, ArSize);
	cout << "The original array is: \n";
	Show_array(array, arr_end);
	Reverse_array(array, arr_end);
	cout << "The reversed array is: \n";
	Show_array(array, arr_end);

	return 0;
}





