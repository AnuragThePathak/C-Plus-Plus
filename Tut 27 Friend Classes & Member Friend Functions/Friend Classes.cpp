#include <iostream>
using namespace std;

// class complex;
class complex
{
    int re, im;
    friend class calculator;
    //used when we have need many functions in that class to access data + we trust that class completely

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

class calculator
{
public:
    int imagPart(complex o1, complex o2)
    {
        return (o1.im + o2.im);
    }
    int realPart(complex o1, complex o2)
    {
        return (o1.re + o2.re);
    }
};

int main()
{
    complex o1, o2;
    o1.setData(11, 45);
    o2.setData(3, 21);
    calculator calc;
    cout << "The real part of the sum of inputs is " << calc.realPart(o1, o2) << endl;
    cout << "The imaginary part of the sum of inputs is " << calc.imagPart(o1, o2) << endl;
    return 0;
}