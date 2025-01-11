//17.5.cpp

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<fstream>
#include<cstdlib>

int main()
{
	using namespace std;

	vector<string> Mat_Frd;
	vector<string> Pat_Frd;
	vector<string> Pub_Frd;


	const char * file_1 = "mat.dat";
	const char * file_2 = "pat.dat";
	const char * file_3 = "pub.dat";
	string str1;
	string str2;

	ifstream s1_file;
	s1_file.open(file_1);
	if (!s1_file.is_open())
	{
		cerr << "Could not open" << file_1 << endl;
		 exit(EXIT_FAILURE);
    }
	else
	{
		while (getline(s1_file, str1))
			Mat_Frd.push_back(str1);
	}
	std::sort(Mat_Frd.begin(), Mat_Frd.end());
	cout << "Here are the friends of Mat:\n";
	for (string str : Mat_Frd)
	{
		std::cout << str << " "; 
	}
	cout << endl;


 
	ifstream s2_file;
	s2_file.open(file_2);
	if (!s2_file.is_open())
	{
		cerr << "Could not open " << file_2 << endl;
		 exit(EXIT_FAILURE);
    }
	else
	{
		while (getline(s2_file, str2))
			Pat_Frd.push_back(str2);
	}
	std::sort(Pat_Frd.begin(), Pat_Frd.end());
	cout << "Here are the friends of Pat:\n";
	for (string str : Pat_Frd)
	{
		std::cout << str << " "; 
	}
	cout << endl;

	Pub_Frd.insert(Pub_Frd.end(), Mat_Frd.begin(), Mat_Frd.end());
	Pub_Frd.insert(Pub_Frd.end(), Pat_Frd.begin(), Pat_Frd.end());
	
	std::sort(Pub_Frd.begin(), Pub_Frd.end());

	auto last = std::unique(Pub_Frd.begin(), Pub_Frd.end());
	Pub_Frd.erase(last, Pub_Frd.end());

	ofstream d_file(file_3, ios::out | ios::app);
    if (!d_file.is_open())
	{
          cerr << "Could not open " << file_3 << endl;
          exit(EXIT_FAILURE);
	}


	cout << "Here are the public friends of Mat and Pat:\n";
	for (string str : Pub_Frd)
	{
		std::cout << str << " "; 
		d_file << str << endl;
	}
	
	s1_file.close();
	s2_file.close();
	d_file.close();


      char ch;
      ifstream fin;
      fin.open(file_3);
      if (fin.is_open())
      {
          cout << "Here are the new contents of the "
              << file_3 << " file:\n";
          while (fin.get(ch))
              cout << ch;
          fin.close();
      }
  
      cout << "\nDone.\n";




	return 0;
}
