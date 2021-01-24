#include <iostream>
using namespace std;

float received(int principal, float factor=1.04){
    static float bounty=1.10;
    bounty=bounty*factor;
    return (principal*factor*bounty);
}
int main()
{
    int principal;
    cin>>principal;
    cout<<"Normal people receive "<<received(principal)<<endl;
    cout<<"Bank employees receive "<<received(principal,1.10)<<endl;
    cout<<"Senior Bank employees receive "<<received(principal,1.10)<<endl;
    return 0;
}