#include <iostream>
using namespace std;

int main()
{
    char ch;
    while (true)
    {
        cout << "Enter a character: ";
        cin>>ch;
        cin.ignore(3, '\n');        
        cout << "char: ch: " << ch << endl;
    }
    return 0;
}