#include <iostream>
using namespace std;

class HabiJabi
{
public:
    long n;
    int a = 34, b = 21, c = 3;
};
int main()
{
    HabiJabi *objPtr = new HabiJabi();
    (objPtr->n) = 999999999;

    for (long i = 0; i < (objPtr->n); i++)
    {
        (objPtr->a) = (objPtr->b) + 20;
        (objPtr->c) = (objPtr->b) + (objPtr->a);
    }
    
    delete objPtr;
    return 0;
}