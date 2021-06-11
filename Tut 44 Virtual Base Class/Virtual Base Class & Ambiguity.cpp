#include <iostream>
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

class Acad :public virtual Student
{
protected:
    int phy, math;

public:
    void setAcadReslt()
    {
        cin >> phy >> math;
    }

    void getAcadReslt()
    {
        cout << "Marks in Physics: " << phy << ", Math: " << math << endl;
    }
};

class Sports : public virtual Student
{
protected:
    int sports;

public:
    void setSprtReslt()
    {
        cin >> sports;
    }

    void getSprtReslt()
    {
        cout << "Scrore in sports is " << sports << endl;
    }
};

class Result : public Acad, public Sports
{
    protected:
    int total;// here we can't write total=phy+math+sports; it needs to be written inside a method only
    public:

    void setResult(){
        setData();
        setAcadReslt();
        setSprtReslt();
        total=phy+math+sports;
    }

    void getResult()
    {
        getData();
        getAcadReslt();
        getSprtReslt();
        cout<<"Total Marks: "<<total<<endl;
    }
};
int main()
{
    Result st;
    st.setResult();
    st.getResult();
    return 0;
}