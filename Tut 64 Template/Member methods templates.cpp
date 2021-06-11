#include <iostream>
using namespace std;

template <class T>
class Oxx
{
    T a, b;

public:
    void setData();
    void getData();
};

template <class T>
void Oxx<T>::setData()
{
    cin >> a >> b;
}
template <class T>
void Oxx<T>::getData()
{
    cout << "a=" << a << ", b=" << b << endl;
}

int main()
{
    Oxx<char> obj;
    obj.setData();
    obj.getData();
    return 0;
}