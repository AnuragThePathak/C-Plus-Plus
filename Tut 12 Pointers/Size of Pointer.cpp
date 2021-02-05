#include <iostream>
using namespace std;

int main()
{
    char a='w';
    char* p=&a;
    cout<<"Size of pointer "<<sizeof(p)<<endl;
    int b='w';
    int* r=&b;
    cout<<"Size of pointer "<<sizeof(r)<<endl;
    long long c='w';
    long long* s=&c;
    cout<<"Size of pointer "<<sizeof(s)<<endl;
    float q='w';
    cout<<"Size of pointer "<<sizeof(&q)<<endl;
    return 0;
}