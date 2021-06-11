#include <iostream>
using namespace std;

class HabiJabi
{
public:
    long n;
    int a = 34, b = 21, c = 3;
};
class Ityadi
{
public:
    HabiJabi *ptr;
};
int main()
{
    HabiJabi *objPtr = new HabiJabi();
    Ityadi *orig=new Ityadi();
    orig->ptr=objPtr;
    (objPtr->n) = 999999999;

    for (long i = 0; i < ((orig->ptr)->n); i++)
    {
        // ((orig->ptr)->a) = ((orig->ptr)->b) + 20;
        ((orig->ptr)->c) = ((orig->ptr)->b) + ((orig->ptr)->a);
    }

    delete objPtr;
    delete orig;
    return 0;
}