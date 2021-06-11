#include <iostream>
using namespace std;

int main()
{
    //for a single variable with value at declaration
    int* ptr=new int(4);  
    cout<<"Value at ptr initially "<<*(ptr)<<endl;
    cin>>*ptr;
    cout<<"Value at ptr after editing "<<*(ptr)<<endl;
    int& x=*ptr;
    cout<<"Value of x is "<<x<<endl;
    //if we want to give a name to the variable rather so we don't need to keep dereferencing in order to use it we can use reference variable

    //deallocating memory stored in pointer
    delete ptr;
    // delete x; meanwhile we can't use this as these 2 operators operate on pointer only
    cout<<"Value at ptr after deallocating "<<*ptr<<endl;
    cout<<"Value of x after deallocating "<<x<<endl;

    //for a single variable with ** no ** value at declaration
    int* pt=new int(); //brackets can be avoided
    cout<<"Value at pt initially "<<*(pt)<<endl;
    cin>>*pt;
    cout<<"Value at pt after editing "<<*(pt)<<endl;
    delete pt;
    cout<<"Value at pt after deallocating "<<*pt<<endl;
    return 0;
}