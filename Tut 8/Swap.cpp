#include <iostream>//some people recommend using <iomanip> to use swap
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<(a+b)<<endl;
    string a1=a,b1=b;
    // //a bchar x=a1[0];
    // a1[0]=b1[0];
    // b1[0]=x;
    swap(a1[0],b1[0]);
    cout<<a1<<" "<<b1<<endl;
    return 0;
}