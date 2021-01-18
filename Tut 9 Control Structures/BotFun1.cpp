#include <iostream>
using namespace std;

int main()
{
    char sum;
    cout<<"press any key";
    cin>>sum;
    
    switch(sum)
    {
    case 'd':
        cout<<"get lost"<<endl;
        break;
    case 'h':
        cout<<"fired"<<endl;
        break;
    default:
        cout<<"better luck next time"<<endl;
        break;
    } 
    cout<<"done with switch case"<<endl;
    return 0;
}    
