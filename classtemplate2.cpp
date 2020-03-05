#include<iostream>
using namespace std;
template <typename T>
class weight
{
private:
T kg;
public:
void setData(T x)
{
kg=x;
}
T getData()
{
return kg;
}
};

int main()
{
 weight <int>obj1;
obj1.setData(5);
cout<<"value is:"<<obj1.getData()<<"\n";
}
