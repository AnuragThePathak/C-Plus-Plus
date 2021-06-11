#include <iostream>
using namespace std;

// int count=0;
class Coor
{
    int x, y;
    static int count;
    public:
    void SetData()
    {
        count++;
    }
    Coor(int a, int b)
    {
        x=a, y=b;
        count++;
        cout<<"Created object number "<<count<<endl;
    }
    Coor()
    {
        x=0, y=0;
        count++;
        cout<<"Created object number "<<count<<endl;
    }
    ~Coor()
    {
        count--;
        cout<<"Destroying object and now remaining "<<count<<endl;
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