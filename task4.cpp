#include <iostream>
#include <string>
using namespace std;
class Person {
public:
    string name;
    int age;
    Person() {
        name = "Unknown";
        age = 0;
    }
    Person(string n) {
        name = n;
        age = 0;
    }
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Person p1;
    Person p2("Alice");
    Person p3("Bob", 25);
    cout << "--- Person Details ---" << endl;
    p1.display();
    p2.display();
    p3.display();
    return 0;
}