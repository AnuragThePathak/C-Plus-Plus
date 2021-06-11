#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    int n;
    cin>>n;
    int m;
    for (int i = 0; i < n; i++)
    {
        cin>>m;
        vec.push_back(m);
    }
    int p,q,r;
    cin>>p>>q>>r;
    vec.erase(vec.begin()+p-1);
    vec.erase(vec.begin()+q-1,vec.begin()+r-1);
    int size=vec.size();
    cout<<size<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}