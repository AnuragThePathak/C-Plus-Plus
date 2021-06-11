#include <iostream>
using namespace std;

class Comp
{
    int re, im;
    public:
    void setData(int a,int b){
        re=a,im=b;
    }
    void getData(){
        cout<<"The number is "<<re<<"+ i"<<im<<endl;
    }
};
int main()
{
    Comp ptr=Comp();
    ptr.setData(2,3);
    ptr.getData();
    return 0;
}
