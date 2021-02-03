#include <iostream>
using namespace std;

//this code shows what actually inline does.It brings the code to main()
inline void swp(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    swp(a,b);
    swp(c,d);
    cin>>a>>b;
    swp(a,b);
    return 0;
}