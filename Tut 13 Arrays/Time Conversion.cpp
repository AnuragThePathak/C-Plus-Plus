#include <iostream>
using namespace std;

string timeConversion(string s){
    if (s.substr(8,9)=="AM"){
        if ((s[0]=='1')&&(s[1]=='2'))
        {
            /* code */
            s[0]='0',s[1]='0';
        }
        
    }
    else if((s[0]!='1')||(s[1]!='2'))
    {
        s[0]=(s[0]+1);
        s[1]=(s[1]+2);
        if (s[1]>'9')
        {
            /* code */
            s[1]=(s[1]-10);
            s[0]=(s[0]+1);
        }
        
    }
    s[8]=' ',s[9]=' ';

    return s;
}
int main()
{
    string s;
    cin>>s;
    cout<<timeConversion(s)<<endl;
    return 0;
}