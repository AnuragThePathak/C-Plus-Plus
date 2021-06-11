#include <iostream>
using namespace std;

class complex;
class calculator
{
public:
    int imagPart(complex o1, complex o2);
};
class complex
{
    int re, im;
    friend int calculator::imagPart(complex o1, complex o2);

public:
    void setData(int a, int b)
    {
        re = a;
        im = b;
    }
    void getData()
    {
        cout << "The complex number is " << re << "+i" << im << endl;
    }
};
int calculator::imagPart(complex o1, complex o2)
{
    return (o1.im + o2.im);
}
int main()
{
    complex o1, o2;
    o1.setData(11,45);
    o2.setData(3,21);
    calculator calc;
    cout<<"The imaginary part of the sum of inputs is "<<calc.imagPart(o1, o2)<<endl;
    return 0;
}