#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;//this is not sufficient without global definition
    public:
    void setId()
    {
        cin>>id;
        count++;
    }
    void getId()
    {
        cout<<"Id of Employee number "<<count<<" is "<<id<<endl;
    }
    void total()
    {
        cout<<"Total number of employees is "<<count<<endl;
    }
    static void totalStatic()
    {
        cout<<"Total number of employees is "<<count<<endl;
    }
};
int Employee::count;
// it's wrong to use static while defining
int main()
{
    Employee happy, peter;
    happy.setId();
    happy.getId();
    peter.setId();
    peter.getId();
    
    // happy.total();

     //this can be used to print static datatype but not satisfactory
    // that's why we have got static member which can only be used to access static datatype (i.e. common datatypes) with reference to that class
    Employee::totalStatic();
    return 0;
}