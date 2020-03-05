#include<iostream>
using namespace std;
int fun(int x)
{
	cout<<x<<"\n";
if(x>=3)
{
cout<<x<<"\n";
return x;
}
fun(x+1);
fun(x+2);
return x;
}
int main()
{
	fun(1);
}
