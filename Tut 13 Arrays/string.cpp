#include <iostream>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<(a+b)<<endl;
    string a1=a,b1=b;
    char x=a1[0];
    a1[0]=b1[0];
    b1[0]=x;//a better aproach is to use swap(a1[0],b1[0]);
    cout<<a1<<" "<<b1<<endl;
    return 0;
}