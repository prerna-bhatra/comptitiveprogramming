#include<iostream> 
using namespace std;
class IndiaBix
{
	private:
	    int x, y; 
    public:
    void SetValue(int &a, int &b)
    {
	a = 100;
	b=200;
a=300;
        x = a;
        y = b;
        Display();
    }
    void Display()
    {
	y=3;
        cout<< x << " " << y; 
    }
};
int main()
{
    int x = 10;
    IndiaBix objBix;
    objBix.SetValue(x, x);
    return 0;
}
