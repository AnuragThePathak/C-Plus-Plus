#include <iostream>
using namespace std;
class Exp
{
    int a;
    friend int dist(int,Exp);
    public:
    Exp(int f)
    {
        a=f;
    };
};
int dist(int x,Exp v)
{
    return x*x;
}
int main()
{
    Exp we(1);
    dist(we.a,we);//it'll not work because we're not allowed to directly pass private variables. We'll have make use of passed class to get the data. However we may pass other variable or public variables in that class just not the private and protected members
    return 0;
}