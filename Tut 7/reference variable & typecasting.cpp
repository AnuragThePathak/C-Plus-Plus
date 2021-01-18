#include <iostream>
using namespace std;

int main()
{
    float a=48.78;
    float y=a;
    cout<<"The score of human is "<<a<<endl;
    cout<<"So we can see the absolute value which is "<<int(y)<<endl;
    int b=int(a);
    cout<<(b==int(y))<<endl;
    return 0;
}
