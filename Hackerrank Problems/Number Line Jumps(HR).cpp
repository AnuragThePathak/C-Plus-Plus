#include <iostream>
using namespace std;

int main()
{
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    bool flag=0;
    for(int i=1;((x1+(v1*i))<=(x2+(v2*i)));i++){
        if ((x1+(v1*i))==(x2+(v2*i)))
        {
            flag=1;
        }
        
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else if(flag==0){
        cout<<"NO"<<endl;
    }
    return 0;
}

