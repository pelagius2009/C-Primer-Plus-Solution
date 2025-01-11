#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;
int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter the name of file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Could not open the file" << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	char f_char;
	int count = 0;
	inFile >> f_char;
	while(inFile.good())
	{
		++count;
		inFile >> f_char;
	}
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";

	if (count == 0)
		cout << "No character in file.\n";
	else
		cout << "The file contains " << count << " characters. \n";

	inFile.close();
	return 0;
}
