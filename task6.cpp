#include <iostream>
using namespace std;
class Box {
public:
    double length;
    double width;
    double height;
    double volume() {
        return length * width * height;
    }
    void display() {
        cout << "L: " << length << ", W: " << width << ", H: " << height << endl;
    }
};
Box largerBox(Box a, Box b) {
    if (a.volume() > b.volume()) {
        return a;
    } else {
        return b;
    }
}
int main() {
    Box b1, b2;
    cout << "Enter dimensions for Box 1 (L W H): ";
    cin >> b1.length >> b1.width >> b1.height;
    cout << "Enter dimensions for Box 2 (L W H): ";
    cin >> b2.length >> b2.width >> b2.height;
    Box winner = largerBox(b1, b2);
    cout << "\n--- Larger Box Dimensions ---" << endl;
    winner.display();
    cout << "Volume: " << winner.volume() << endl;
    return 0;
}