#include <iostream>
using namespace std;

int main()
{
    int a=6,b=3;

    cout<<"The value of the logical operator ((a==b)&&(a>b)) is "<<((a==b)&&(a>b))<<endl;
    cout<<"The value of the logical operator ((a==b)||(a>b)) is "<<((a==b)||(a>b))<<endl;
    cout<<"The value of the logical operator (!(a>b)) is "<<(!(a>b))<<endl;
    return 0;
} 
