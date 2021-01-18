#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int a, b, i;
    a <= b;
    cin >> a;
    cin >> b;
    string ar[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if ((a < 9) && (b <= 9))
    {
        for (i = a; i <= b; i++)
        {
            cout << ar[i - 1] << endl;
        }
    }
    else if (a <= 9)
    {
        /* code */
        for (i = a; i <= 9; i++)
        {
            /* code */
            cout << ar[i - 1] << endl;
        }
        for (i = 10; i <= b; i++)
        {
            /* code */
            if (i % 2)
            {
                /* code */
                cout << "odd" << endl;
            }
            else
            {
                cout << "even" << endl;
            }
        }
    }
    else
    {
        for (i = a; i <= b; i++)
        {
            /* code */
            if (i % 2)
            {       
                /* code */
                cout << "odd" << endl;
            }
            else
            {
                cout << "even" << endl;
            }
        }
    }

    return 0;
}
// the above code can be simplified in this was
/*
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a <= b;
    cin >> a;
    cin >> b;
    string ar[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i=a;i<=b;i++){
        if(i<=9){
            cout<<ar[i-1]<<endl;
        }
        else{
            if(i%2){
                cout<<"odd"<<endl;
            }
            else{
                cout<<"even"<<endl;
            }
        }
    }
}
*/