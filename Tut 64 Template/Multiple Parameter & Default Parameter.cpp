#include <iostream>
using namespace std;

template <class T1 = int, class T2 = char, class T3 = char> //we must add default argument for latter parameters as well if used for former parameters
class Funda
{
    T1 a, b;
    T2 c;

public:
    Funda(T1 x, T1 y, T2 z)
    {
        a = x, b = y, c = z;
    }
    void getData()
    {
        cout << "a+b=" << a+b << ", b=" << b << ", c=" << c << endl;
    }
};
int main()
{
    Funda<int, float> obj1(12, 25, 6.98);
    obj1.getData();
    return 0;
}