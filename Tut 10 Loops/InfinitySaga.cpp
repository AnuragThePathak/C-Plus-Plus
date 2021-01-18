#include <iostream>
using namespace std;

int main()
{
     for(float x; true; x++)
     {
         cout<<x<<endl;
         
         if(x==1.05)
         {
             break;
         }    
     }
     return 0;
}
