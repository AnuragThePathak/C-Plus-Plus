#include <iostream>
using namespace std;

const int a=88;

int main()
{
    const int a=44;
    cout<<"thor "<<a<<endl;
    cout<<"aquaman "<<::a<<endl;
    return 0;
}
