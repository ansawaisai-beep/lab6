#include <iostream>
#include <string>
using namespace std;
struct Address {
    string street;
    string city;
    int postalCode;
};
class Hospital {
public:
    string name;
    Address location;
    Hospital(string n, string s, string c, int p) {
        name = n;
        location.street = s;
        location.city = c;
        location.postalCode = p;
    }
    void display() {
        cout << "Hospital Name: " << name << endl;
        cout << "Address:       " << location.street << ", "
             << location.city << " " << location.postalCode << endl;
    }
};
int main() {
    Hospital myHospital("City General", "123 Medical Lane", "Metropolis", 54000);
    cout << "--- Hospital Details ---" << endl;
    myHospital.display();
    return 0;
}