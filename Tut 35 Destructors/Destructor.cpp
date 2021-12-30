#include <iostream>
using namespace std;

// int count=0;
class Coor
{
    int x, y;
    static int count;  // Static variables with same name being same/ not unique for each and every oject of same class, can't be part/member of a class. Hence they can't be used here. However we can declare them inside a member function as they will not be a part of the class in such case. 
    public:
    void SetData()
    {
        count++;
    }
    Coor(int a, int b)
    {
        x=a, y=b;
        Coor.count += 1;
        cout<<"Created object number "<<Coor.count<<endl;
    }
    Coor()
    {
        x=0, y=0;
        Coor.count += 1;
        cout<<"Created object number "<<Coor.count<<endl;
    }
    ~Coor()
    {
        Coor.count -= 1;
        cout<<"Destroying object and now remaining "<<Coor.count<<endl;
    }
};
int main()
{
    Coor pt;
    cout<<"Entering block"<<endl;
    {
        Coor pt1, pt2;
        cout<<"Exiting block"<<endl;
    }
    cout<<"Exited block"<<endl;
    return 0;
}
