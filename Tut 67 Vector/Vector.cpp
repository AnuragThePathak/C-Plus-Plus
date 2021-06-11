#include <iostream>
#include <vector>
using namespace std;

template <class T>
void setData(vector<T> vec, int n) //as name is not a pointer it's sufficient to pass vector in this way, we need to pass it/ call it by reference or reference variable
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
    
    setData(vec, n);
    // getData(vec, n);
    cout<<vec.size()<<endl;
    cout<<sizeof(vec)<<endl;
    // cout<<vec<<endl; vec i.e. name isn't a pointer unlike array
    return 0;
}