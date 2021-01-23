#include <iostream>
using namespace std;

void dev(int a);
int exprsn();
int main()
{
    int num;
    cout<<"enter the number:"<<endl;
    cin>>num;
    dev(num);
    exprsn();
    // using void or int then return 0 are same but we can't use void after cout<<
    // but when we do not get a integer in return then using cout prints 0 unneccessarily
    return 0;
}

void dev(int a)
{
    if(a%2)
    {
        cout<<"The number is odd"<<endl;
    }
    else{
        cout<<"The number is even"<<endl;
    }
}

int exprsn(){
    cout<<"Hello, how are you?"<<endl;
    return 0;
}