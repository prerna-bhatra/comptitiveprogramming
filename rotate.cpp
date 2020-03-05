#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
//main code
int main()
{
    //vector
    list<int> v={ 10, 20, 30, 40, 50 };

    //printing vector elements
    cout << "vector elements begfore rotating..." << endl;
    for (int x : v)
        cout << x << " ";
    cout << endl;

    //rotating vector from 2nd element
    rotate(v.begin(), v.begin() + 2, v.end());

    cout << "vector elements after rotating..." << endl;
    for (int x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}
