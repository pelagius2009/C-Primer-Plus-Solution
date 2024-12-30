//16.9.cpp
#include<iostream>
#include<vector>
#include<list>
#include<ctime>
#include<climits>
#include<random>
#include<cstdlib>
#include<algorithm>

int main()
{
	using std::vector;
	using std::list;
	using std::cout;
	using std::endl;



	int SIZE = 20000;
	vector<int> vi0(SIZE);
	vector<int> vi(SIZE);
	//list<int> li(SIZE);
	std::srand(std::time(0));
//	int random_num;

	for(int& num : vi0)
		num = std::rand();

	vi = vi0;
	list<int> li(vi0.begin(), vi0.end());
	
	clock_t start;
	clock_t end;

//caculate the time to sort vi
	start = clock();
	std::sort(vi.begin(), vi.end());
	end = clock();
	cout << "Time cost to sort vi: " << (double)(end - start)/CLOCKS_PER_SEC << endl;

//caculate the time to sort li
	start = clock();
	li.sort();
	end = clock();
	cout << "Time cost to sort li: " << (double)(end - start)/CLOCKS_PER_SEC << endl;

	li.clear();
	li.insert(li.end(), vi0.begin(), vi0.end()); // reset li to vi0

	start = clock();
	vi.assign(li.begin(), li.end());	
	std::sort(vi.begin(), vi.end());
	li.assign(vi.begin(), vi.end());
	end = clock();
	cout << "Time cost of combined operation: " << (double)(end - start)/CLOCKS_PER_SEC << endl;
	return 0;
}
