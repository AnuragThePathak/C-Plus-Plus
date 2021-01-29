#include <iostream>
using namespace std;

int main()
{
    int list[]={1,2,3,4,5,6};
    cout<<list<<endl;
    //arrays are not like list in python. name of a array is a pointer variable so we get such reults.
     
    list[2]=7;
    cout<<list[2]<<endl;

    int list2[4];
    list2[0]=11;
    list2[1]=12;
    list2[2]=13;
    list2[3]=14;

    for (int i = 0; i <4; i++)
    {
        /* code */
        cout<<"the value of list2["<<i<<"] is"<<list2[i]<<endl;
    }
    
    cout<<*list2<<endl;
    
    int* p=list2;
    cout<<"*p="<<*p<<endl;
    cout<<"*(p+1)="<<*(p+1)<<endl;
    cout<<"*(p+2)="<<*(p+2)<<endl;
    int ar[2]={1,2};
    cout<<ar<<endl;
    cout<<ar[]<<endl;
    
    return 0;
}
