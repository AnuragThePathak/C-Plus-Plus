#include <iostream>
#include <vector>
using namespace std;

template <class T>
void setData(vector<T>& vec, int n)
{
    T m;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        vec.push_back(m);
    }
}
template <class T>
void getData(vector<T> vec, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec;
    int n;
    cin >> n;
    
    setData(vec, n); //We mayn't keep provision for passing size because we can get size easily using vec.size()
    getData(vec, n);
    cout<<sizeof(vec)<<endl; //size of a vector is always 24
    return 0;
}