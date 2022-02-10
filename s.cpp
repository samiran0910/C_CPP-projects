/* write a program which takes the radius of a circle as input from the user , passes it to another fumction that computes the area and the circumference of the circle and displays the value of area and circumference from the main() function. */ 
#include <iostream>
using namespace std;


void areaperi(double r, double &area, double &peri)
{
    area = 3.14 * r * r;
    peri = 2 * 3.14 * r;
}
int main()
{
    double area, peri, r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    areaperi(r, area, peri);
    cout << "Area of the circle is: " << area << endl;
    cout << "Perimeter of the circle is: " << peri << endl;
    return 0;
   
}
