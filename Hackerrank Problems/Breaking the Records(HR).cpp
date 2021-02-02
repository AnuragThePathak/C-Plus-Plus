#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long scores[n]; //int also works
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>scores[i];
    }
    
    int max=0,min=0;
    long long x=scores[0],y=scores[0];
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (x<scores[i])
        {
            /* code */
            x=scores[i];
            max++;
        }
        if (y>scores[i])
        {
            /* code */
            y=scores[i];
            min++;
        }
    }
    cout<<max<<" "<<min<<endl;
    return 0;
}