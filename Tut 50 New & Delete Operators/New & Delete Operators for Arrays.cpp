#include <iostream>
using namespace std;

int main()
{
    // for an array (we can't declare the elements in the begining below code show)
    // int* ar=new int{87,64};
    // for (int i = 0; i < 2; i++)
    // {
    //     cout<<*(ar+i)<<" ";
    // }
    // cout<<endl;
    
    // correct code for array
    int* arr=new int[20];
    for (int i = 0; i < 20; i++)
    {
        arr[i]=i*i;
    }
    for (int i = 0; i < 20; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    delete[] arr;
    cout<<"After deallcating:"<<endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     cin>>arr[i];
    // }
    for (int i = 0; i < 20; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}