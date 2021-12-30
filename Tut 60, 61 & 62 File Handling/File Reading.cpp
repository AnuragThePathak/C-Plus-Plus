#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream Reado("File Handling.txt");
    string str;
    // Reado>>str; //it's not prefered usually because it'll get characters till there is no blank space, therefore we use below one which works like cin with getline

    getline(Reado,str); //This method also fails to get all the characters in the file so we use different method for that
    cout<<"This is what written inside the flie being read: "+str<<endl;
    //C++ also provides printing of strings using + sign just like dart and java
    Reado.close();
    return 0;
}