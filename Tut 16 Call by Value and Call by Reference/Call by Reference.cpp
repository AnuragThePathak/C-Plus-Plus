#include <iostream>
using namespace std;

void swp(int a,int b){  //it will not swap
    int temp=a;
    a=b;
    b=temp;
}
void SwapPointer(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<"The value of num1 was "<<num1<<" and the value of num2 was "<<num2<<endl;
    // swp(num1,num2);
    SwapPointer(&num1,&num2);
    cout<<"The value of num1 is "<<num1<<" and the value of num2 is "<<num2<<endl;
    return 0;
}