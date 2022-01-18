/* write a program which takes the radius of a circle as input from the user , passes it to another fumction that computes the area and the circumference of the circle and displays the value of area and circumference from the main() function. */ 
#include <iostream>
using namespace std;
/*float area(float r)
{
    return 3.14 * r * r;
}
float circumference(float r)
{
    return 2 * 3.14 * r;
}*/
int main()
{
    ios_base::sync_with_stdio(false);
    float r;
    //cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "Area of the circle: " << (float)(r*r*3.14)<< endl;
    cout << "Circumference of the circle: " << (float)(2*r*3.14) << endl;
    return 0;
}
