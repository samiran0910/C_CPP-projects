/* write a program which takes the radius of a circle as input from the user , passes it to another fumction that computes the area and the circumference of the circle and displays the value of area and circumference from the main() function. */ 
#include <iostream>
using namespace std;
float area(float r)
{
    return 3.14 * r * r;
}
float circumference(float r)
{
    return 2 * 3.14 * r;
}
int main()
{
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "Area of the circle: " << area(r) << endl;
    cout << "Circumference of the circle: " << circumference(r) << endl;
    return 0;
}
