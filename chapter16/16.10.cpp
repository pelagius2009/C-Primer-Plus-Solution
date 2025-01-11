// vect3.cpp -- using STL functions
//16.10.cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
struct Review {
std::string title;
int rating;
double price;//
};


//bool operator<(const Review & r1, const Review & r2);
//bool worseThan(const Review & r1, const Review & r2);

bool operator<(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2);
bool rating_cmp(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2);
bool price_cmp(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2);

bool FillReview(Review & rr);
//bool FillReview(std::shared_ptr<Review> rr);
//void ShowReview(const Review & rr);
void ShowReview(const std::shared_ptr<Review> rr);

int main()
{
using namespace std;

//vector<Review> books;

vector<shared_ptr<Review>> books;//

Review temp;

//shared_ptr<Review> temp(new Review);

while (FillReview(temp))
{
	//books.push_back(temp);
	shared_ptr<Review> temp_ptr(new Review);
	*temp_ptr = temp;
	//temp = new share_ptr<Review>();
	books.push_back(temp_ptr);
}

if (books.size() > 0)
{
cout << "Thank you. You entered the following "
<< books.size() << " ratings:\n"
<< "Rating\tBook\tPrice\n";
for_each(books.begin(), books.end(), ShowReview);

/*
sort(books.begin(), books.end());
cout << "Sorted by title:\nRating\tBook\n";
for_each(books.begin(), books.end(), ShowReview);
sort(books.begin(), books.end(), worseThan);
cout << "Sorted by rating:\nRating\tBook\n";
for_each(books.begin(), books.end(), ShowReview);
random_shuffle(books.begin(), books.end());
cout << "After shuffling:\nRating\tBook\n";
for_each(books.begin(), books.end(), ShowReview);
*/

vector<shared_ptr<Review>> books_1;

int choice;
cout << "Please choose the sorting method \n"
	<< "1: By book name\n"
	<< "2: By rating in asending\n"
	<< "3: By rating in descending\n"
	<< "4: By price in asending\n"
	<< "5: By price in descending\n"
	<< "0 to quit\n";

cin >> choice;
while(choice != 0)
{
	switch(choice)
	{
		case 1:
			books_1 =  books;
			std::sort(books_1.begin(), books_1.end());
			cout << "Sorted by title:\nRating\tBook\tPrice\n";
			for_each(books_1.begin(), books_1.end(), ShowReview);
			break;
		case 2:
			books_1 =  books;
			std::sort(books_1.begin(), books_1.end(),rating_cmp);
			cout << "Sorted by rating in asceding order:\nRating\tBook\tPrice\n";
			for_each(books_1.begin(), books_1.end(), ShowReview);
			break;
		case 3:
			books_1 =  books;
			std::sort(books_1.rbegin(), books_1.rend(),rating_cmp);
			cout << "Sorted by rating in desceding order:\nRating\tBook\tPrice\n";
			for_each(books_1.begin(), books_1.end(), ShowReview);
			break;
		case 4:
			books_1 =  books;
			std::sort(books_1.begin(), books_1.end(),price_cmp);
			cout << "Sorted by price in asceding order:\nRating\tBook\tPrice\n";
			for_each(books_1.begin(), books_1.end(), ShowReview);
			break;
		case 5:
			books_1 =  books;
			std::sort(books_1.rbegin(), books_1.rend(),price_cmp);
			cout << "Sorted by price in desceding order:\nRating\tBook\tPrice\n";
			for_each(books_1.begin(), books_1.end(), ShowReview);
			break;
	}

	cout << "Please choose the sorting method \n"
	<< "1: By book name\n"
	<< "2: By rating in asending\n"
	<< "3: By rating in descending\n"
	<< "4: By price in asending\n"
	<< "5: By price in descending\n"
	<< "0 to quit\n";
	cin >> choice;
}


}
else
cout << "No entries. ";
cout << "Bye.\n";
return 0;
}

/*
bool operator<(const Review & r1, const Review & r2)
{

if (r1.title < r2.title)
return true;
else if (r1.title == r2.title && r1.rating < r2.rating)
return true;
else
return false;
}
*/


bool operator<(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2)
{

if (r1->title < r2->title)
return true;
//else if (r1->title == r2->title && r1->rating < r2->rating)
//return true;
else
return false;
}

bool rating_cmp(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2)
{
if (r1->rating < r2->rating)
return true;
else
return false;
}

bool price_cmp(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2)
{
if (r1->price < r2->price)
return true;
else
return false;
}


/*
bool worseThan(const Review & r1, const Review & r2)
{
if (r1.rating < r2.rating)
return true;
else
return false;
}
*/



bool FillReview(Review & rr)
//bool FillReview(std::shared_ptr<Review> rr)
{

//std::shared_ptr<Review> temp(new Review);
std::cout << "Enter book title (quit to quit): ";
std::getline(std::cin,rr.title);
//std::getline(std::cin,rr->title);
if (rr.title == "quit")
return false;
std::cout << "Enter book rating: ";
std::cin >> rr.rating;
std::cout<< "Enter book price: ";
std::cin >> rr.price;
if (!std::cin)
return false;
// get rid of rest of input line
while (std::cin.get() != '\n')
continue;
return true;
}


//void ShowReview(const Review & rr)
void ShowReview(const std::shared_ptr<Review> rr)
{
//std::cout << rr.rating << "\t" << rr.title << std::endl;
std::cout << rr->rating << "\t" << rr->title << "\t" << rr->price <<std::endl;
}


