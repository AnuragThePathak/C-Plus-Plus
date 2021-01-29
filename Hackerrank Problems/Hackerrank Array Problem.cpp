#include <iostream>
using namespace std;

int simpleArraySum(int n){
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+ar[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<simpleArraySum(n)<<endl;
    return 0;
}