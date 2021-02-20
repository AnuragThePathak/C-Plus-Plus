#include <iostream>
using namespace std;

void iceCreamParlor(int m, int cost[], int n);
int main()
{
    int t, m, n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        cin>>m>>n;
        int cost[n];
        for (int j = 0; j < n; j++)
        {
            /* code */
            cin>>cost[j];
        }
        
        iceCreamParlor(m, cost, n);
    }
    
    return 0;
}

void iceCreamParlor(int m, int cost[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        for (int j = i+1; j < n; j++)
        {
            /* code */
            if((cost[i]+cost[j])==m)
            {
                cout<<i+1<<" "<<j+1<<endl;
            }
        }
        
    }
    
}