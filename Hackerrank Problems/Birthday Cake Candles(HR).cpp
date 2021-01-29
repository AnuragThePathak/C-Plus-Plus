#include <iostream>
using namespace std;

int birthdayCakeCandles(int n,int candles[]){
    int max=candles[0];
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (max<candles[i])
        {
            /* code */
            max=candles[i];
        }    
    }
    
    int x=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (candles[i]==max)
            {
                /* code */
                x++;
            }
            
        }
        return x;
    
}
int main()
{
    int n;
    cin>>n;
    int candles[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>candles[i];
    }
    
    cout<<birthdayCakeCandles(n,candles)<<endl;
    return 0;
}