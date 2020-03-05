#include<iostream>
using namespace std;
int main()
{

         int j;         
        int i;
        int a[5]={1,2,3,5};
        for(i=0;i<=6;i++)
                {
                        if(a[i]==i+1)
                        {
                                continue;
                        }
                        else
                        {
                               
                                j=i+1;
			     break;

                        }

                }
cout<<j;
}
