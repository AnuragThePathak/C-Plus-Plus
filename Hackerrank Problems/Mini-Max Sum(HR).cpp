#include <iostream>
using namespace std;

void miniMaxSum(int arr[5]){
    long Max=arr[0],Min=arr[0],sum=0;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        sum=sum+arr[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if (Max<arr[i])
        {
            /* code */
            Max=arr[i];
        }
        if (Min>arr[i])
        {
            /* code */
            Min=arr[i];
        }
        
    }
    
    cout<<(sum-Max)<<" "<<(sum-Min)<<endl;
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
    miniMaxSum(arr);
    return 0;
}