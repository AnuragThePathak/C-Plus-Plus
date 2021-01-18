#include <iostream>
using namespace std;

int main()
{
    int a=3;
    int& c=a;
    int * b=&a;

    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;
    cout<<"the address of a is "<<&c<<endl;

    c=4;

    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<&c<<endl;
    cout<<a<<endl;

    cout<<"the value stored at b(address of a) is"<<*b<<endl;
    return 0;
}
