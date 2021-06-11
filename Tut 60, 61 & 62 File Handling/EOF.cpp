#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream Reado("File Handling.txt");
    while (Reado.eof()==0)
    {
        string str;
        getline(Reado,str);
        cout<<str<<endl;
        //Other methods like using character and string without getline has horrible experience so it's good to use this method in C++
    }
    
    Reado.close();
    return 0;
}