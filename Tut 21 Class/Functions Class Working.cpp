#include <iostream>
using namespace std;

// doesn't matter where input is taken but if operate on actual variable then swap occurs if formal parameters are changed then it doesn't ,because we operate on copies in that case 
class storm
{
    int a, b;

public:
    int c, d;
    void input()
    {
        cin >> a >> b;
    }
    void input1()
    {
        cin>>c>>d;
    }
    void swp();
    void swpActual(int x, int y);
    void print()
    {
        cout << a << " " << b << endl;
    }
};
void storm::swp()
{
    int temp = c;
    c = d;
    d = temp;
}
void storm::swpActual(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    storm wo;
    // wo.input();
    // wo.print();
    cin>>wo.c>>wo.d;
    wo.swp();
    // wo.input1();
    // wo.swpActual(wo.c, wo.d);
    cout<<wo.c<<" "<<wo.d<<endl;
    return 0;
}