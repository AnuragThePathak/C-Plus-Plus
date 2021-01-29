#include <iostream>
#include <cmath>
using namespace std;

int diagonalDifference(int n){
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            cin>>arr[i][j];
        }

        
    }
    int sum1=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum1=sum1+arr[i][i];
    }
    int sum2=0;
    for (int i = 0,j=n-1; i < n,j>=0; i++,j--)
    {
        sum2=sum2+arr[i][j];
    }
    int diff=fabs(sum1-sum2);
    return diff;
}
int main()
{
    int n;
    cin>>n;
    cout<<diagonalDifference(n)<<endl;
    return 0;
}