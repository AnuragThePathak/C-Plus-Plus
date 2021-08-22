#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle
{
protected:
    int height, width;

public:
    // void read_input()
    // {
    //     cin >> width >> height;
    // }

    // The virtual keyword makes sense only when we are pointing base class pointer to inherited class object. It also makes somewhat sense when we are using inherited class member function having same name as the virtual function in the base class but that works without virtual as well.

    virtual void display() // In C++ we can override virtual functions only
    // void display()
    {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle
{
public:
    void read_input()
    {
        cin >> width >> height;
    }

    void display() override  // Overriding keyword is useful when we want to override a function in base class essentially then we use override keyword. In such cases we also have to use virtual in the method to be overriden in the base class. Using virtual has no disadvantage in most of the cases as pointing of base class pointer to inherited class object can be performed intentionally only (doesn't occur by mistake) when we need it.

    // void display()
    {
        cout << width * height << endl;
    }
};

int main()
{
    RectangleArea r_area;

    // Rectangle r_area;

    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}