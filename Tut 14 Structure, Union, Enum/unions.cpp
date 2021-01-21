#include <iostream>
using namespace std;

int main()
{
    typedef union result
    {
        /* data */
        float percentage;
        int mark;
        char grade;
    } rs; //use of typedef is optional here also

    rs ricky;
    rs jake;
    
    ricky.mark=89;
    jake.grade='A';

    cout<<"Grade of Jake is "<<jake.grade<<endl;
    return 0;
}