#include <iostream>
using namespace std;

int main()
{
    float d=3.14;
    long double e=3.14;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    
    cout<<"The size of d is "<<sizeof(d)<<endl;
    cout<<"The size of e is "<<sizeof(e)<<endl;
    cout<<"The size of 3.14 is "<<sizeof(3.14)<<endl;
    
    return 0;
}
