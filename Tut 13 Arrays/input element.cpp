#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N];
    for (int i = 0; i <N; i++)
    {
        /* code */
        cin>>A[i];
    }
    for (int j =(N-1); j>=0; j--)
    {
        /* code */
        cout<<A[j]<<" ";
        // a gap between outputs is required for hackerrank problem i am solving
    }
    

    return 0;
}
