//6.7.cpp

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string word;
	int v_num = 0; // number of words beginning with vowels
	int c_num = 0;// number of word beginning with consonants
	int o_num = 0;//number of other situations

	cout << "Enter words (q to quit): ";
		
	while ((cin >> word) && (word != "q"))
	{
		char initial = word[0];		
		if (isalpha(initial))
		{
			if (initial == 'a' || initial == 'A' \
				|| initial == 'e' || initial == 'E' \
				|| initial == 'i' || initial == 'I' \
				|| initial == 'o' || initial == 'O' \
				|| initial == 'u' || initial == 'U' )
				++v_num;
			else
				++c_num;
		}
		else
			++o_num;
	}
	
	cout << v_num << " words beginning with vowels.\n";
	cout << c_num << " words beginning with consonants.\n";
	cout << o_num << " others.\n";

	return 0;
}
