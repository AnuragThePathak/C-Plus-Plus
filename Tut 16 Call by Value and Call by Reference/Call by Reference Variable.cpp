#include <iostream>
using namespace std;

void increment(int& a,int& b){
    
    a=a+6;
    b=b+6;
} //that swap model also works and C++ feature only not available in C
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<"The value of num1 was "<<num1<<" and the value of num2 was "<<num2<<endl;
    increment(num1,num2);
    cout<<"The value of num1 is "<<num1<<" and the value of num2 is "<<num2<<endl;
    return 0;
}