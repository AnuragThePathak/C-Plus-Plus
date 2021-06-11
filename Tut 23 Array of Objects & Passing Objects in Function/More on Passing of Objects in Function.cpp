#include <iostream>
using namespace std;

class complex
{
    int re, im;
    friend void sum(complex n1, complex n2, complex* n3);
    public:
    void setData()
    {
        cin>>re>>im;
    }
    void getData()
    {
        cout<<re<<" +i"<<im<<endl;
    }
};
void sum(complex n1, complex n2, complex* n3)
{
    n3->re = n1.re+n2.re;
    n3->im = n1.im+n2.im;
}
int main()
{
    complex n[3];
    for (int i = 0; i < 2; i++)
    {
        n[i].setData();
    }
    sum(n[0],n[1],n+2);//we can also use &n[2]. If directly pass n[2] we just remain changing copy unlike arrays
    //we can also use reference variable to get correct result. Process same as in case of integer and other datatype
    n[2].getData();
    return 0;
}