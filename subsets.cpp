#include<iostream> 
using namespace std; 
  
// Prints all subarrays in arr[0..n-1]                                                                    
void subArray(int arr[], int n) 
{ 
        int sum=7;
	int sum2=0;
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
{		sum2=sum2+arr[k];
		if(sum==sum2)
{
                cout << arr[k] << " ";
 }               //sum[i+j+k]=arr[k]+sum[i+j+k];
}
                cout<<"\n"; 


        } 
    } 
} 
  
// Driver program 
int main() 
{ 
    int arr[] = {1, 2, 3, 4};
	 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "All Non-empty Subarrays\n"; 
    subArray(arr, n); 
    return 0; 
}


