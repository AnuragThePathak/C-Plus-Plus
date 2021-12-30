#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream roto("File Handling.txt");//it works like in C
    string str;
    getline(cin,str);
    roto<<str;
    roto.close();
    return 0;
}