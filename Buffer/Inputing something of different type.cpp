#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int a=0;
    if(cin>>a){ //In this case we will get 0 if input is non-integer because cin returns zero in case it can't find suitable value in the beginning of buffer, if we start with integer it will input those upto which buffer is integer

    cout<<a<<endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
    }
    // Use of if statement is done to check if stream is set to badbit on partially correct stream i.e. 12ab in place of a integer
    /* If there remains something other than \n in the buffer cin or other other input taking function will take the remaining parts directly rather than taking input from user. cin don't have problem with \n as it itself is habitated working */

    char b; /* In case of inappropriate input this portion won't execute properly
     When an input error is made, the stream "breaks," cin returns false, and the program stops.There are two steps to recovering from an error:

    Setting the stream from badbit to goodbit using cin.clear().
    Remove the incorrect characters from the stream. One way to do this is with cin.ignore().
    */
    cin>>b;
    cout<<b<<endl;
    return 0;
}