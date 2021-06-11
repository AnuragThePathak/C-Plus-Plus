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
    vector<int> vec;
    int n;
    cin >> n;

    VecFunc<int>:: setData(vec, n);
    VecFunc<int>:: getData(vec, n);
    vec.insert(vec.begin()+2,10);
    n++;
    VecFunc<int>:: getData(vec, n);
    vector<int>:: iterator itr=vec.begin();
    vec.insert(itr+1,3,22); //22 will be inserted 3 times
    n +=3;
    VecFunc<int>:: getData(vec, n);
    cout<<"*itr="<<*itr<<", *(itr+2)="<<*(itr+2)<<endl;
    return 0;
}