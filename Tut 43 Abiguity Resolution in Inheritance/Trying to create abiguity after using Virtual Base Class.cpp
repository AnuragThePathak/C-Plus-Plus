#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
    int roll_no;
    string name;
    void setData()
    {
        cin >> roll_no >> name;
    }
    void getData()
    {
        cout << "Roll No: " << roll_no << ", Name: " << name << endl;
    }
};

class Acad : virtual public Student
{
protected:
    int phy, math;

public:
    void setAcadReslt()
    {
        setData();
        cin >> phy >> math;
    }

    void getAcadReslt()
    {
        cout << "Marks in Physics: " << phy << ", Math: " << math << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int sports;

public:
    void setSprtReslt()
    {
        setData(); //In this sort of cases when we are editing the value of some variable in both the classes, the lastly edited value is obtained i.e. overwritting occurs on editing
        cin >> sports;
    }

    void getSprtReslt()
    {
        cout << "Scrore in sports is " << sports << endl;
    }
};

class Result : public Acad, public Sports
{
    //In this case we are being saved from getting ambiguities because of virtual base class
    // In case we didn't use virtual base class we had redefine the functions inside class student where we start the function and then inside that call the function using scope resolution operator
    // It basically happens when the two 
protected:
    int total = phy + math + sports;

public:
    void setResult()
    {
        // setData();
        setAcadReslt();
        setSprtReslt();
    }

    void getResult()
    {
        getData();
        getAcadReslt();
        getSprtReslt();
    }
};
int main()
{
    Result st;
    Acad ob1;
    st.setData();
    st.setResult();
    st.getResult();
    ob1.getData();
    
    return 0;
}