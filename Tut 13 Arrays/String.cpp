#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<s.substr(1,6)<<endl;
    cout<<s.length()<<endl;
    reverse(s.begin(),s.end());//reverse function is in algorithm header file
    cout<<s<<endl;
    return 0;
}