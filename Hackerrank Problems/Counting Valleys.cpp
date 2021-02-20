#include <iostream>
using namespace std;

int main()
{
    long steps;
    cin >> steps;
    string path;
    cin >> path;
    long valley = 0, i = 0;
    while (i < steps)
    {
        int k=1;
        int sum=12223;
        while (sum != 0)
        {
            if(sum==12223)
            {
                sum=0;
            }
            if (path[i] == 'D')
            {
                sum = sum-1;
            }
            if (path[i] == 'U')
            {
                sum = sum+1;
                k=0;
            }
            if(k==1)
            {
                valley++;
            }
            k=0;
            i++;
        }
    }
    cout<<valley<<endl;
    return 0;
}