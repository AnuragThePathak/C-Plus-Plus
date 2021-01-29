#include <iostream>
using namespace std;

int compare(int arr[2]){
    int a[3],b[3];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        cin>>a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        /* code */
        cin>>b[i];
    }

    for (int i = 0; i < 3; i++)
    {
        /* code */
        if (a[i]>b[i])
        {
            /* code */
            arr[0]++;
        }
        else if(a[i]<b[i]){
            arr[1]++;
        }
    }
    return arr[2];
    
}
int main()
{
    int arr[2];
    compare(arr);
    for (int i = 0; i <2; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    return 0;
}