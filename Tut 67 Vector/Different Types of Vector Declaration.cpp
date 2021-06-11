#include <iostream>
#include <vector>
using namespace std;

template <class T>
class VecFunc
{
public:
    static void setData(vector<T> &vec, int n)
    {
        T m;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            vec.push_back(m);
        }
    }

    static void getData(vector<T> vec, int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    vector<float> vec = {2.12, 4.9, 5.345, 3.14}; //We may not use equal sign as well
    cout << vec.size() << " " << sizeof(vec) << endl;
    VecFunc<float>::getData(vec, vec.size());
    vector<int> vec1(7,2);
    cout<<vec1.size()<<endl;
    for (int i = 0; i < vec1.size(); i++)
    {
        cout<<vec1[i]<<" ";
    }
    cout<<endl;

    return 0;
}