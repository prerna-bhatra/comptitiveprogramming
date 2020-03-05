#include <bits/stdc++.h> 
#include<iostream> 
#include<string>
using namespace std; 
  
// Prints all subarrays in arr[0..n-1] 
void subArray(string s, int n) 
{ 
	//int sum[n*n]={0};
int  i,j,k;
    // Pick starting point 
    for ( i=0; i <n; i++) 
    { 
        // Pick ending point 
        for ( j=i; j<n; j++) 
        { 
            // Print subarray between current starting 
            // and ending points 
            for ( k=i; k<=j; k++)
{
                cout << s[k] << " ";
		//sum[i+j+k]=arr[k]+sum[i+j+k];
}
		cout<<"\n"; 
		  
            
        } 
    } 
} 
  
// Driver program 
int main() 
{ 
    string str = "cab"; 
   // int n = sizeof(str)/sizeof(arr[0]); 
	int n=str.length();
	sort(str.begin(),str.end());
    cout << "All Non-empty Subarrays\n"; 
    subArray(str, n); 
    return 0; 
}
