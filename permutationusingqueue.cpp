#include<bits/stdc++.h>
using namespace std;
int main() {
	//code
	string s="((()))";
	int i;
	int c1=0,c2=0;
	for(i=0;i<s.length();i++)
	{
	    if(s[i]=='(')
	    {
	        c1++;
	    }
	    else
	    {
	        c2++;
	    }
	}
	if(c1!=c2)
	{
	    cout<<"not valid\n";
	}
	else
	{
	    cout<<"valid\n";
	}
	return 0;
}
