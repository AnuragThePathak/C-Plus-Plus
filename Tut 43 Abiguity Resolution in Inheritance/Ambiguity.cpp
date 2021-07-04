#include <iostream>
using namespace std;

class Loco
{
public:
    int data;
    void Jata()
    {
        cout <<"The data is "<< data<<endl;
    }
};

class Coco
{
public:
    int data;
    void Jata()
    {
        cout << data;
    }
};
class Poco : public Loco, public Coco
{
    public:
    int data= Loco::data; // This is only way to resolve ambiguity for members/variable. However it's not possible to resolve ambiguity in the base classes has members with same name and this members are being used inside some member functions in those classes. In that case it's possible but  very incovenient to set the member values from our side in that derived class as like here changing data doesn't affect Loco::data 

    // int data= Coco::data;
    void Jata()
    {
        // Coco::Jata();
        Loco::data=50;
        Loco::Jata();
    }
};
int main()
{
    Poco obj;
    cin>>obj.data;
    obj.Jata();
    return 0;
}