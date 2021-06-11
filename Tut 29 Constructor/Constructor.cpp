#include <iostream>
#include <cmath>
using namespace std;

class crdin
{
    int x, y;
    friend float dist(crdin a, crdin b);

public:
    crdin()
    {
        cin >> x >> y;
    }
};

float dist(crdin a, crdin b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main()
{
    crdin a, b;
    cout << "The distance between the two points is " << dist(a, b) << endl;
    return 0;
}