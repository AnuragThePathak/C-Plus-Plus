#include <iostream>
using namespace std;

class Student
{
    int scores[5];
    public:
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin>>scores[i];
        }    
    }
    int calculateTotalScore()
    {
        int sum=0;
        for (int i = 0; i < 5; i++)
        {
            sum += scores[i];
        }
        return sum;
    }
};
int main()
{
    int n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }
    int x;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        ar[i]=s[i].calculateTotalScore();
    }
    
    for (int i = 1; i < n; i++)
    {
        if (ar[0]<ar[i])
        {
            x++;
        }
        
    }
    cout<<x<<endl;
    return 0;
}