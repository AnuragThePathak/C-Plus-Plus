#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void getData()
    {
        cout << "var_base=" << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_der;
    void getData() //this function doesn't matter anyway. We just creating to check
    {
        cout << "var_der=" << var_der << endl;
    }
};
int main()
{
    BaseClass *base_ptr;
    DerivedClass der_obj;
    base_ptr = &der_obj; //This can't be done unless we are inheriting DerivedClass from BaseClass
    // base_ptr=new DerivedClass; // It also keeps doing the same thing
    base_ptr->var_base=23;
    base_ptr->getData();
    return 0;
}