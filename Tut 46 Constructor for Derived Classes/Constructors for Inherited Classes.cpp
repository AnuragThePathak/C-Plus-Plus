#include <iostream>
using namespace std;

class Base1
{
    public:
    int a;
    Base1(int x)
    {
        a=x;
    }
    void printBase1()
    {
        cout<<"a="<<a<<endl;
    }
};

class Base2
{
    public:
    int b;
    Base2(int x)
    {
        b=x;
    }
    void printBase2()
    {
        cout<<"b="<<b<<endl;
    }
};

class Derived:public Base1, public Base2
{
    public:
    int c,d;
    // void setData()
    // {
    //     cin>>a>>b>>c>>d;
    // }
    //above code has no use without constructor for Derived which is written below

    Derived(int x,int y,int z, int v):Base1(z),Base2(v) //here Base1 , Base2 can be written in reverse order as well. We can also write different values and variables in initialization section just like initialization list of variables
    {
        c=x, d=y;
    }
    void printDerived()
    {
        cout<<"c="<<c<<",d="<<d<<endl;
    }
};
int main()
{
    Derived ha(2,3,4,5);
    // ha.setData();
    ha.printBase1();
    ha.printBase2();
    ha.printDerived();
    return 0;
}