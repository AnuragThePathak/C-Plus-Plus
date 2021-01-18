#include <iostream>
using namespace std;

int main()
{
     for(int i=1; i<=20; i++)
     {
         //if cout<<i<<endl; is written before continue state ment then our work is undone because continue statement is read after printing 10
         if(i==10)
         {
             continue;
         }
         
         cout<<i<<endl;
     }
     return 0;

}
