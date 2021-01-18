#include <iostream>
using namespace std;

int main()
{
    int a=10;
    cout<<"(a+(++a))="<<(a+(++a))<<endl;
    //here we obtain the same result because the compiler is able to understand itself and does exactly in the same way we are doing using brackets. First ++a comes and its value is 11 as well as it increase value of a by 1. So after completing the first bracket when we go to the next and last bracket the a outside the first bracket is treated and since value of a is already increased it is 11. Meanwhile value of ++ a is determined earlier while treating the first brackets so final value is 22
    // similarly in case of
    a=10;
    cout<<"(a+(a++))="<<(a+(a++))<<endl;
    //as value of a++ is 10 itself the resultant value is 21 
    a=4;
    cout<<"(++a + ++a)="<<(++a + ++a)<<endl;//firstly one ++a=5 and then
    a=4;
    cout<<"(a++ + a++)="<<(a++ + a++)<<endl;
    a=4;
    cout<<"(a++ + ++a)="<<(a++ + ++a)<<endl; 
    //same thing happens on using brackets too
    a=4;
    cout<<"++a="<<++a<<endl;
    return 0;
}
