#include <iostream>
using namespace std;

int area(float r){
    return(22/7*r*r);
}
int area(int l,int b){
    return (l*b);
}
int area(int a){
    return (a*a);
}
int main()
{
    cout<<"Area of circle is "<<area(5.8f)<<endl; //we don't add f then it's not regarded as float
    cout<<"Area of rectangle is "<<area(4,7)<<endl;
    cout<<"Area of square is "<<area(2)<<endl;
    return 0;
}