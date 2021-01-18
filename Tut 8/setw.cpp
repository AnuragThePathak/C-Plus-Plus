#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a=56, b=6757;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;

    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl; 
//trying to do something impossible keeps it as it was by-deafault like writing cout<<"The value of b is: "<<setw(2)<<b<<endl;
//same in case of setw(0)
//writing setw in any other position makes it completely useless
    return 0;
}
