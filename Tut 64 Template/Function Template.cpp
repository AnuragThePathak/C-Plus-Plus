#include <iostream>
using namespace std;

template <class T>
T adder(T a, T b)
{
    T c = a + b;
    return c;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << adder(a, b) << endl; //In function we don't have to mention which types we'll be using unlike objects.
    //if type of a & b are not same error will occur
    return 0;
}