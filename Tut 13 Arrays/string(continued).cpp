#include <iostream>
using namespace std;

int main()
{
    cout<<("AM"-"AM")<<endl;
    cout<<("AM"-"PM")<<endl;
    cout<<("AM"-"tM")<<endl;
    string s="abd123";
    s.substr(1,3)=' ';//this doesn't work
    cout<<s<<endl;
    string sr="omg12yu";
    cout<<(sr.substr(3,4)=="12")<<endl;//it does work for numbers, we need to use numbers separately in such cases
    cout<<(s.substr(2,4)=="d12")<<endl;
    return 0;
}
