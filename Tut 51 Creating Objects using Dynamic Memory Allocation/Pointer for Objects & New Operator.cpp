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
    Comp* ptr=new Comp(); //We can avoid the brackets as well. This is used to create the object dynamically. This syntax creates object without a name. Reference variable can be used to name it.
    //In order to creaate array of objects we use Comp* ptr=new Comp[number_of_objects]
    // Just like variables
    (*ptr).setData(2,3); //using arrow operator here makes our working easier
    (*ptr).getData();
    delete ptr;
    return 0;
}