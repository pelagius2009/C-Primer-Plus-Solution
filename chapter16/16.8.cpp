//16.8.cpp

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main()
{
	using std::vector;
	using std::string;
	using std::cin;
	using std::cout;
	using std::endl;
	
	vector<string> Mat_Frd;
	vector<string> Pat_Frd;
	vector<string> Pub_Frd;

	string Frd;

	cout << "Please enter the friends of Mat, 'quit' to finish:\n";
	std::getline(cin, Frd);
	while(Frd !="quit")
	{
		Mat_Frd.push_back(Frd);
		std::getline(cin,Frd);
	}
	std::sort(Mat_Frd.begin(), Mat_Frd.end());
	
	cout << "Here are the friends of Mat:\n";
	for (string str : Mat_Frd)
	{
		std::cout << str << " "; 
	}
	cout << endl;
	cout << "Please enter the friends of Pat, 'quit' to finish: \n";
	std::getline(cin, Frd);
	while(Frd !="quit")
	{
		Pat_Frd.push_back(Frd);
		std::getline(cin,Frd);
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

	cout << "Here are the public friends of Mat and Pat:\n";
	for (string str : Pub_Frd)
	{
		std::cout << str << " "; 
	}
	
	return 0;
}
