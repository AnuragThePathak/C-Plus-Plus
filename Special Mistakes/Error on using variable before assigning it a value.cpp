#include <iostream>
using namespace std;

class SStu
{
protected:
    int a, b;

public:
    int c=a+b;
    void setData()
    {
        cin >> a >> b;
        // c = a + b;
    }
    void getData()
    {
        cout << c << endl;
    }
};
int main()
{
    // SStu oop;
    // oop.setData();
    // oop.getData();
    int a;
    int b=5*a;
    cin>>a;
    cout<<b<<endl;//error is because of initially every variable has garbage value
    
    return 0;
}