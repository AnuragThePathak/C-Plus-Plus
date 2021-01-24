#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
           if(ar[j]<ar[i]){
               swap(ar[i],ar[j]);
           } 
        }
    }

    //increasing order
    cout<<"The elements in increasing order are ";
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }cout<<endl;

    //decreasing order
    cout<<"The elements in decreasing order are ";
    for(int i=n-1;i>=0;i--){
        cout<<ar[i]<<" ";
    }cout<<endl;
}