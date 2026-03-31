#include <iostream>
using namespace std;
class Rectangle {
public:
    double length;
    double width;
    double area() {
        return length * width;
    }
};
void compare(Rectangle a, Rectangle b) {
    double areaA = a.area();
    double areaB = b.area();
    if (areaA > areaB) {
        cout << "The first rectangle is larger." << endl;
    } else if (areaB > areaA) {
        cout << "The second rectangle is larger." << endl;
    } else {
        cout << "Both rectangles have the same area." << endl;
    }
}
int main() {
    Rectangle r1, r2;
    cout << "Enter Length and Width for Rectangle 1: ";
    cin >> r1.length >> r1.width;
    cout << "Enter Length and Width for Rectangle 2: ";
    cin >> r2.length >> r2.width;
    compare(r1, r2);
    return 0;
}