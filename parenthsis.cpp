#include<bits/stdc++.h>
using namespace std;
bool fun(string s)
{
    if(s.length()%2!=0)
    {
        return false;
    }
    else
    {
         int i;
       stack<char> st;
       for(i=0;i<s.length();i++)
       {
           st.push(s[i]);
       }
       for(i=s.length();i>0;i--)
       {
           if(st.top()==s[i])
           {
               st.pop();
		return true;
           }
           else
           {
               return false;
           }
       }
    }
    return true;
}
int main()
{
    string s="(())";
 if(fun(s))
{
cout<<"yes"'
}
else
{
cout<<"no";
}
	
}


