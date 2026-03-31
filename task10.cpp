#include <iostream>
using namespace std;
class Temperature {
private:
    double celsius;
public:
    Temperature(double c = 0) {
        setCelsius(c);
    }
    void setCelsius(double c) {
        if (c < -273.15) {
            cout << "Error: Temperature cannot be below absolute zero (-273.15C)." << endl;
            celsius = -273.15;
        } else {
            celsius = c;}}
    double getCelsius() const {
        return celsius;}
    double getFahrenheit() const {
        return (celsius * 9.0 / 5.0) + 32.0;}
    double getKelvin() const {
        return celsius + 273.15;}};
int main() {
    Temperature temp;
    cout << "Setting temperature to -300C..." << endl;
    temp.setCelsius(-300.0);
    cout << "\nSetting temperature to 25C..." << endl;
    temp.setCelsius(25.0);
    cout << "Celsius:    " << temp.getCelsius() << " C" << endl;
    cout << "Fahrenheit: " << temp.getFahrenheit() << " F" << endl;
    cout << "Kelvin:     " << temp.getKelvin() << " K" << endl;
    return 0;
}