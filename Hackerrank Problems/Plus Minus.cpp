#include <iostream>
#include <iomanip>
using namespace std;

void plusMinus(int n,float& p,float& m,float& z)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
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
}

int main()
{
    int n;
    cin >> n;
    float p=0, m=0, z=0;
    plusMinus(n,p,m,z);
    cout << fixed << setprecision(6) << p / n << endl;
    cout << fixed << setprecision(6) << m / n << endl;
    cout << fixed << setprecision(6) << z / n << endl;
    return 0;
}