#include <iostream>
using namespace std;

int main()
{
    int n,k,b;
    cin>>n>>k;
    int bill[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>bill[i];
        sum=sum+bill[i];
    }
    cin>>b;

    sum=sum-bill[k];
    int anna=(sum/2);
    if (anna==b)
    {
        /* code */
        cout<<"Bon Appetit"<<endl;
    }
    else{
        cout<<b-anna<<endl;
    }
    return 0;
}