#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream Reado("File Handling.txt"); // cin also a input stream. cin takes input from terminal/bash and extracts those into variables whereas objects of ifstream i.e. Reado in this case takes input from file and extracts those into variables
    
    string str;
    // Reado>>str; //it's not prefered usually because it'll get characters till there is no blank space, therefore we use below one which works like cin with getline

    getline(Reado,str); //This method also fails to get all the characters in the file so we use different method for that
    cout<<"This is what written inside the flie being read: "+str<<endl;
    //C++ also provides printing of strings using + sign just like dart
    Reado.close();
    return 0;
}