#include <iostream>
using namespace std;

void countApplesAndOranges(long s,long t,long a,long b,long m,long n,long apples[],long oranges[]){
    int ora=0,apl=0;
    for (long i = 0; i <m; i++)
    {
        /* code */
        if (((a+apples[i])>=s)&&((a+apples[i])<=t))
        {
            /* code */
            apl++;
        }   
    }
    for (long i = 0; i < n; i++)
    {
        /* code */
        if (((b+oranges[i])>=s)&&((b+oranges[i])<=t))
        {
            /* code */
            ora++;
        }
    }
    
    cout<<apl<<endl;
    cout<<ora<<endl;
}
int main()
{
    long s, t, a, b, m,n;
    cin>>s>>t>>a>>b>>m>>n;
    long apples[m],oranges[n];
    for (long i = 0; i < m; i++)
    {
        /* code */
        cin>>apples[i];
    }
    for (long i = 0; i < n; i++)
    {
        /* code */
        cin>>oranges[i];
    }

    countApplesAndOranges(s,t,a,b,m,n,apples,oranges);
    return 0;
}
