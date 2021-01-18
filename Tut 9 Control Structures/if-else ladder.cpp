#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"What's your age?";
    cin>>age;
    
    if(age<0)
    {
        cout<<"You're not born"<<endl;
    }
    
    else if((age>=0) && (age<18))
    {
        cout<<"U can't"<<endl;
    }    
    
    else if(age==18)
    {
        cout<<"U will get a kid pass"<<endl;
    }
    
    else
    {
        cout<<"Invitation found."<<endl;
    }
    return 0;
}
