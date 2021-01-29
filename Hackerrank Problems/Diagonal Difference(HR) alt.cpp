#include <iostream>
#include <iomanip>
using namespace std;

void plusMinus(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    float p=0,m=0,z=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] < 0)
        {
            /* code */
            m++;
        }
        else if (arr[i] > 0)
        {
            /* code */
            p++;
        }
        else
        {
            z++;
        }
    }
    cout << fixed << setprecision(6) <<p / n << endl;
    cout << fixed << setprecision(6) <<m / n << endl;
    cout << fixed << setprecision(6) <<z / n << endl;
}

int main()
{
    int n;
    cin >> n;
    plusMinus(n);
    
    return 0;
}