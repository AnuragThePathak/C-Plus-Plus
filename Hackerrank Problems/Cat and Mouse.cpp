#include <iostream>
#include <cmath>
using namespace std;

void catAndMouse(int x,int y,int z){
    int A=fabs(x-z);
    int B=fabs(y-z);
    if (A<B)
    {
        /* code */
        cout<<"Cat A"<<endl;
    }
    else if(B<A){
        cout<<"Cat B"<<endl;
    }
    else{
        cout<<"Mouse C"<<endl;
    }
}
int main()
{
    int q,x,y,z;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        /* code */
        cin>>x>>y>>z;
        catAndMouse(x,y,z);
    }
    
    return 0;
}