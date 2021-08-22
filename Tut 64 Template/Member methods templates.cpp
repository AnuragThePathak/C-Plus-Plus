#include <iostream>
using namespace std;

template <class T>
class MyClass
{
    T a, b;

public:
    void setData();
    void getData();
};

template <class T>
void MyClass<T>::setData()
{
    cin >> a >> b;
}
template <class T>
void MyClass<T>::getData()
{
    cout << "a=" << a << ", b=" << b << endl;
}

int main()
{
    MyClass<char> obj;
    obj.setData();
    obj.getData();
    return 0;
}