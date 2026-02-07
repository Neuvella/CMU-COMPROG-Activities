// Activity 6
// Find the area and perimeter of a triangle

#include <iostream>
using namespace std;
int main() {

    double length, width;
    double area, perimeter;
    double side1, side2, side3;

    cout << "What is the length of the triangle?: ";
    cin >> length;
    cout << "What is the width of the triangle?: ";
    cin >> width;

    cout << "What is the first side of the triangle?: ";
    cin >> side1;
    cout << "What is the second side of the triangle?: ";
    cin >> side2;
    cout << "What is the third side of the triangle?: ";
    cin >> side3;

    area = (length * length + width * width) * .5;
    perimeter = side1 + side2 + side3;

    cout << "The area of the triangle is " << area << " and the perimeter is " << perimeter << "." << endl;

    return 0;
}