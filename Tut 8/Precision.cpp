#include <iostream>
using namespace std;

int main()
{
    float a;
    cout<<"a=";
    cin>>a;
    cout<<a<<endl;
    //if 0 comes at any postition after decimal than the digits after that gets ignored
    //to solve this problem we can use the following code
    /*
    #include <iostream>
    #include <iomanip>
    using namespace std;
    
    int main()
    {
        float a;
        cout<<"a=";
        cin>>a;
        cout<<fixed<<setprecision(number_of_digits_after_decimal_desired)<<a<<endl;
        return 0;        
    }
    */
}
