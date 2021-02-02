#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    int pair=0;
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];   
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j =i+1 ; j < n; j++)
        {
            /* code */
            if ((ar[i]+ar[j])%k==0)
            {
                /* code */
                pair++;
            }
            
        }
        
    }
    cout<<pair<<endl;

    return 0;
}