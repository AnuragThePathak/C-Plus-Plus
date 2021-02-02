#include <iostream>
using namespace std;

int fib(int n){
    if (n<=2)
    {
        return 1;
    }
    else{
        return (fib(n-1)+fib(n-2));
    } //use of else can be avoided
}
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<"The "<<n<<"th term is "<<fib(n)<<endl;
    return 0;
}