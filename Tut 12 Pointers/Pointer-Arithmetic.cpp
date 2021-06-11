#include <iostream>
using namespace std;

int main()
{
    // int vs int
    int ar[10];
    for (int i = 0; i < 10; i++)
    {
        *(ar+i)=i;
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    // float vs int
    float ar1[10];
    for (int i = 0; i < 10; i++)
    {
        *(ar1+i)=i;
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<ar1[i]<<" "
    }
    cout<<endl;
    //char vs int
    char ar2[10]="123456789";
    for (int i = 0; i < 10; i++)
    {
        cout<<*(ar2+i);
    }
    cout<<endl;

    cin>>*(ar2+3);
    cout<<ar2[3]<<endl;
    return 0;
}