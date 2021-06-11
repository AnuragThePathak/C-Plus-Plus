#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream roto("File Handling.txt"); // cout also a output stream. cin prints output on terminal/bash whereas objects of ofstream i.e. roto in this case prints output on file 
    string str;
    getline(cin,str);
    roto<<str;
    roto.close();
    return 0;
}