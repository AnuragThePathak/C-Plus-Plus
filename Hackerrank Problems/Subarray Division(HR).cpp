#include <iostream>
using namespace std;

int birthday(int n,int d,int m,int s[]){
    int way=0;
    for (int i = 0; i < n-m+1; i++)
    {
        /* code */
        int sum=0;
        for (int j = i; j <= m+i-1; j++)
        {
            /* code */
            sum=s[j]+sum;
        }
        if(sum==d){
            way++;
        }
    }
    return way;
}
int main()
{
    int n,d,m,s[n];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>s[i];
    }
    cin>>d>>m;
    cout<<birthday(n,d,m,s);
    return 0;
}