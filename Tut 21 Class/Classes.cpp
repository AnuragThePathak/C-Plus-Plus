#include <iostream>
using namespace std;

//various methods in comments are tested to check the interrelationship between private members and public members and there relations with others
class student
{
    private:
    float attendence;
    void inputAttendence();
    public:
    int mark;
    int attendMark();
    // if we declare the fuction in private it also becomes inaccessible
};

void student::inputAttendence()
{
    cin>>attendence;
    // return attendence;
}
int student::attendMark()
{
    // cin>>attendence;
    inputAttendence();
    if(attendence>75)
    {
        return mark;
    }
    return -1;
}
int main()
{
    student cavani;
    cin>>cavani.mark;
    cout<<cavani.attendMark()<<endl;
    return 0;
}