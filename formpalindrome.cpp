#include <iostream>
//The library below must be included for the reverse function to work
#include<bits/stdc++.h> 
using namespace std;

int main() {
  
  string greeting = "Hello";
  //Note that it takes the iterators to the start and end of the strin
	string s=greeting.substr(0,greeting.size()-1);
	reverse(s.begin(),s.end());
	cout<<greeting<<s;
}
