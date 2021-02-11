#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], col[100];
    for (int i = 0; i < 100; i++)
    {
        /* code */
        if (i < n)
        {
            cin >> arr[i];
        }
        col[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        col[arr[i] - 1]++;
    }

    int sum=0;
    for (int i = 0; i < 100; i++)
    {
        /* code */
        sum=col[i]/2;
    }
    return 0;
}