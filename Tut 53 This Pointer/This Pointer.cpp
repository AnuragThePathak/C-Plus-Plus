#include <iostream>
using namespace std;

class Example
{
    int a;

public:
    // void setData(this->a);//not possible like dart
    void setData(int a)
    {
        this->a=a;
    }
    void getData()
    {
        cout<<"a="<<a<<endl;
    }
    
    Example retObj()
    {
        return *this;
    }
};
int main()
{
    Example obj;
    obj.setData(23);
    obj.getData();
    obj.retObj().getData();
    obj.getData();
    return 0;
}