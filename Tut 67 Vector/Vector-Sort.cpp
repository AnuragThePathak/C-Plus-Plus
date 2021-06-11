#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    register int i,m;
    for (i = 0; i < n; i++)
    {
        cin>>m;
        vec.push_back(m);
    }
    sort(vec.begin(),vec.end());
    for (i = 0; i < n; i++)
    {
        cout<<vec[i]<<" ";
    }
    
    return 0;
}