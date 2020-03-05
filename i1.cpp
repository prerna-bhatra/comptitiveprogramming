#include<iostream> 
using namespace std;
struct IndiaBix
{
    int arr[5]; 
    public:
    void BixFunction(void);
    void Display(void);
};
void IndiaBix::Display(void)
{
    for(int i = 0; i < 5; i++) 
        cout<< arr[i] << " " ;
}
void IndiaBix::BixFunction(void)
{
    static int i = 0, j = 4; 
    int tmp = arr[i]; 
    arr[i]  = arr[j]; 
    arr[j]  = tmp   ;
	cout<<"I="<<i<<"\n"; 
	cout<<"J="<<j<<"\n"; 
    i++;
    j--;
    if(j != i) BixFunction();
}
int main()
{
    IndiaBix objBix = { 5, 6, 3, 9, 0 };
    objBix.BixFunction();
    objBix.Display();
    return 0; 
}
