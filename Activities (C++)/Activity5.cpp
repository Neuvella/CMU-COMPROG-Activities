// Activity 5
// Find the area and perimeter of a square

#include <iostream>
using namespace std;
int main() {

    double length, width;
    double area, perimeter;

    cout << "What is the length of the square?: ";
    cin >> length;
    cout << "What is the width of the square?: ";
    cin >> width;

    area = length * length;
    perimeter = width * 4;

    cout << "The area of the square is " << area << " and the perimeter is " << perimeter << "." << endl;

    return 0;
}
