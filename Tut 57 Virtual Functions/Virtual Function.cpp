#include <iostream>>
using namespace std;

class Person
{
public:
    string name;
    int age;
    virtual void getdata() {}
    virtual void putdata() {}
};
class Professor : public Person
{
public:
    int publications, cur_id;
    void getdata()
    {
        cin >> name >> age;
        cin >> publications;
        static int x = 1;
        cur_id = x;
        x++;
    }
    void putdata()
    {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};
class Student : public Person
{
public:
    int marks[6], cur_id, sum = 0;
    void getdata()
    {
        cin >> name >> age;
        for (int i = 0; i < 6; i++)
        {
            cin >> *(marks + i);
            sum += *(marks + i);
        }

        static int x = 1;
        cur_id = x;
        x++;
    }

    void putdata()
    {
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};

int main()
{
    int n, val;
    cin>>n>>val;
    Person* per[n];
    for (int i = 0; i < n; i++)
    {
        if (val==1)
        {
            per[i]=new Professor();
        }
        else
        {
            per[i]=new Student();
        }
    }
    for (int i = 0; i < n; i++)
    {
        per[i]->getdata();
        per[i]->putdata();
    }
    
    // Please note that the code is not fully correct as dynamically allocated memories are not deallocated
    return 0;
}