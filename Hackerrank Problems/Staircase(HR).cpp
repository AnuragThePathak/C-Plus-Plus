#include <iostream>
using namespace std;

void Staircase(int);
int main()
{
    int n;
    cin>>n;
    Staircase(n);
    return 0;
}

void Staircase(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (i>(n-j))
            {
                /* code */
                cout<<"#";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}