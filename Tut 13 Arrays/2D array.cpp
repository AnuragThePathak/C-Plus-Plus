#include <iostream>
using namespace std;

int add(int x[3][3],int y[3][3],int z[3][3]){
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            z[i][j]=x[i][j]+y[i][j];
        }
        
    }
    return z[3][3];
}
int main()
{
    int x[3][3],y[3][3];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            cin>>x[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            cin>>y[i][j];
        }
        
    }
    int z[3][3];
    add(x,y,z);
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            cout<<z[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
