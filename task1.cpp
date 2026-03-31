#include <iostream>
#include <iomanip>
using namespace std;
const double PI = 3.14159;
class Circle {
public:
    double radius;
    double area();
    double circumference();
};
double Circle::area() {
    return PI * radius * radius;
}
double Circle::circumference() {
    return 2 * PI * radius;
}
int main() {
    Circle myCircle;
    cout << "Enter the radius of the circle: ";
    cin >> myCircle.radius;
    cout << "\n--- Circle Results ---" << endl;
    cout << "Radius:        " << myCircle.radius << endl;
    cout << "Area:          " << myCircle.area() << endl;
    cout << "Circumference: " << myCircle.circumference() << endl;
    return 0;
}