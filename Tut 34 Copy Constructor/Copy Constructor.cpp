#include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    Number()
    {
        a = 0, b = 0;
    } //it's mandatory to write the default constructor if we don't pass parameter while declaring any of the objects
    Number(int x, int y = 0)
    {
        a = x, b = y;
    }
    Number(const Number &obj)
    {
        cout << "***Copy constructor is invoked***" << endl;
        a = obj.a, b = obj.b;
    } //it's not neccessary as we get a copy constructor by default

    void getData()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
};
int main()
{
    Number n1(3, 4), n2(6), n3, n4;
    n1.getData();
    n2.getData();
    n3 = Number(n1);
    n3.getData();

    n4 = n1;
    n4.getData();
    Number n5 = n1;

    // We can also use this syntax *** Number n5(n1); ***
    // The default copy constructor makes a shallow copy. To make a deep copy, you must write a copy constructor and overload the assignment operator, otherwise the copy will point to the original, with disastrous consequences.

    n5.getData();
    n4 = n2; //The assignment operator also makes a shallow copy if used not like we did earlier. In this way also objects can be copied but doesn't invoke copy constructor it calls assignment operator only
    n4.getData();
    return 0;
}