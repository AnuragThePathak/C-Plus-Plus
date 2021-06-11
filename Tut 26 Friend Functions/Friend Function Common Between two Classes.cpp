#include <iostream>
using namespace std;

class Y;
class X
{
    int val;
    // friend swap(int , int);//built-in function can't be used so far
    friend void swp(X*,Y*);
    public:
    void setData(int a)
    {
        val=a;
    }
    int getData(){
        return val;
    }
};

class Y
{
    int val;
    friend void swp(X*,Y*);
    public:
    void setData(int a)
    {
        val=a;
    }
    int getData(){
        return val;
    }
};

void swp(X* o1,Y* o2)
{
    int p=o1->val;
    o1->val=o2->val;
    o2->val=p;
}
int main()
{
    X o1;
    Y o2;
    o1.setData(3);
    o2.setData(8);
    swp(&o1, &o2);
    // swap(o1.val, o2.val)
    cout<<o1.getData()<<" "<<o2.getData()<<endl;
    return 0;
}