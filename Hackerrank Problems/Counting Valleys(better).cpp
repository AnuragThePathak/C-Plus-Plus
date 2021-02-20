#include <iostream>
using namespace std;

int countVal(int n,string s)
{
    int valley=0, sum=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='U')
        {
            if(++sum==0)//sum can be increased outside then compared as well
            {
                valley++;
            }
            cout<<sum<<endl;
        }
        else
        {
            sum--;
        }
    }
    return valley;
}
int main()
{
    int steps;
    string path;
    cin>>steps>>path;
    cout<<countVal(steps, path)<<endl;
    return 0;
}