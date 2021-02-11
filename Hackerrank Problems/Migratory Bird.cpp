#include <iostream>
using namespace std;

int migratoryBirds(int n,int arr[]){
    int x[5]={0,0,0,0,0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            /* code */
            if(arr[i]==j){
                x[j-1]++;
            }
            //better approach to use x[arr[i]-1] because it does the same thing but two loops are not required    
        }
        
    }
    int most=x[0], max=1;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if(most<x[i]){
            max=x[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    cout<<migratoryBirds(n,arr)<<endl;
    return 0;
}