#include <iostream>
using namespace std;

class rational
{
    double p,q;
    friend rational product(rational n1, rational n2);
    public:
    void setData()
    {
        cout<<"Enter quotient and divident respectively:";
        cin>>p>>q;
    }
    void getData()
    {
        cout<<"The product is "<<p<<"/"<<q<<endl;
    }
};
rational product(rational n1, rational n2)
{
    rational n3;
    n3.p=n1.p *n2.p;
    n3.q=n1.q * n2.q;
    return n3;
}
int main()
{
    rational n[3];
    register int i;
    for ( i = 0; i < 2; i++)
    {
        (n+i)->setData();
    }
    n[2] = product(n[0], n[1]);
    (n+2)->getData(); // -> is used in place .(dot) when we write the address of the object instead of the object
    return 0;
}