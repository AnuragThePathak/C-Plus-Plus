#include <iostream>
using namespace std;

template <class T>  //T is called template parameter
class vector //The name of the class need not to be template always, it's just a typical example
{
    T *arr;
    int size;
    static int x;

public:
    vector(int a)
    {
        size = a;
        arr = new T[size];
        // x++;
    }
    void setData()
    {
        cout << "Input values for Object: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    T dotProduct(vector v)
    {
        T dPdt = 0;
        for (int i = 0; i < size; i++)
        {
            dPdt += arr[i] * v.arr[i];
        }
        return dPdt;
    }
};
int main()
{
    vector<float> vec1(2);
    vector<float> vec2(2);
    vec1.setData();
    vec2.setData();
    float dotPrdt = vec1.dotProduct(vec2);
    cout << dotPrdt << endl;
    return 0;
}