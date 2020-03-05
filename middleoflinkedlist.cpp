#include <iostream>
#include <list>
#include <string>
#include <iterator>
#include <algorithm>
 using namespace std;
int main()
{
	std::list<std::string> listOfStrs =
	{ "First", "Sec", "Third", "Fourth", "Fifth", "Sixth","7","8","9","10" };
 
	/**** Finding nth element using std::advance() ******/
 
	// Find 3rd element from list
 
	// Create iterator pointing to first element
	int l=listOfStrs.size();
	std::list<std::string>::iterator it = listOfStrs.begin();
 
	// Advance the iterator by 2 positions,
	std::advance(it, l/2);
 
	// Now iterator it points to 3rd element
	std::cout<<l/2 << "th  element = " << *it << std::endl;
 
	/**** Finding nth element using std::next() ******/
 
	// Find 3rd element from list
 
	// It returns a new iterator pointing to n position after the
	// base iterator given as first argument
	auto it1 = std::next(listOfStrs.begin(), 2);
 
	std::cout << "3rd element = " << *it1 << std::endl;
 
	return 0;
}
