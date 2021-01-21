#include <iostream>
using namespace std;

int main()
{
    struct movie
    {
        /* data */
        float duration;
        float rating;
    };
    struct movie Avengers;
    struct movie Aquaman;

    Avengers.duration=2.30;
    Avengers.rating=8.7;

    Aquaman.duration=2.28;
    Aquaman.rating=8.941;

    cout<<"Duration Avengers is "<<Avengers.duration<<endl;
    cout<<"The rating of Aquaman is "<<Aquaman.rating<<endl;

    // using typedef
    typedef struct player
    {
        int goal;
        float success;
    } pl;
    
    pl hazard;
    pl muller;

    hazard.goal=6;

    muller.success=87.49;

    cout<<"Success of Muller is "<<muller.success<<endl;

    return 0;
}