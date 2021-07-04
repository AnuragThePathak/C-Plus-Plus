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
    // The requirementof this concept is given in the next code
    BaseClass *base_ptr;
    DerivedClass der_obj;
    base_ptr = &der_obj; //This can't be done unless we are inheriting DerivedClass from BaseClass

    // base_ptr=new DerivedClass; // (Never use it in this case) It also keeps doing the same thing, but we don't need it as we have finally not using the memory which base_ptr gets allocated rather we are assigning address of der_obj to base_ptr. Hence it will be useless if we allocate memory for base_ptr in heap as later on we'll be unable to deallocate it as well.

    base_ptr->var_base=23;
    base_ptr->getData();
    /*Go through the following stuff if required 
    https://stackoverflow.com/questions/46452788/any-purpose-of-using-base-class-pointers-to-derived-class-if-virtual-function-is
    */
    return 0;
}