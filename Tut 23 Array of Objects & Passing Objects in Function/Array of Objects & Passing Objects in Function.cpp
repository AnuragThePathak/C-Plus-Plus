#include <iostream>
using namespace std;

class complex
{
    int re, im;

public:
    void setData()
    {
        cin >> re >> im;
    }
    void sum(complex a, complex b)
    {
        re = a.re + b.re;
        im = a.im + b.im;
    }
    //in case we want to declare and define this sum() function and the next function getData outside the class we can do that but we will have to pass 3rd function also as argument but we will friend function as normal function can't access private data
    void getData()
    {
        cout << "The sum of complex numbers is " << re << "+ i" << im << endl;
    }
};
int main()
{
    complex num[3];
    for (int i = 0; i < 2; i++)
    {
        num[i].setData();
    }
    num[2].sum(num[0], num[1]);
    num[2].getData();
    return 0;
}