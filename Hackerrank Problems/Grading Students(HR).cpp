#include <iostream>
#include <cmath>
using namespace std;

int gradingStudents(int n,int grades[]){
    for (int i = 0; i < n; i++)
    {
            for (int j = 8; j <= 20; j++)
            {
                /* code */
                if((grades[i]<(5*j))&&(((5*j)-grades[i])<3))
                {
                    /* code */
                    grades[i]=(5*j);
                }
                
            }
        
    }
    return grades[n];
}
int main()
{
    int n;
    cin>>n;
    int grades[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>grades[i];
    }
    gradingStudents(n,grades);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<grades[i]<<endl;
    }
    
    
    return 0;
}