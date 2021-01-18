#include <iostream>
using namespace std;

int main()
{
    
    int age;
    cout<<"Your age?";
    cin>>age;
    
    switch(age)
    {
    case 20:
        cout<<"u r 20"<<endl;
        break;
        
    case 40:
        cout<<"started getting old"<<endl;
        break;
    
    default:
        cout<<"No special case"<<endl;
    break;
    }
    
    cout<<"Done with switch-case"<<endl;
    
    return 0;
}
