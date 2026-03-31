#include <iostream>
#include <string>
using namespace std;
class Book {
public:
    string title;
    string author;
    double price;
    void printDetails();
};
void Book::printDetails() {
    cout << "Title:  " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price:  $" << price << endl;
    cout << "--------------------------" << endl;
}
int main() {
    Book library[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Book " << (i + 1) << ":" << endl;
        cout << "Title: ";
        getline(cin >> ws, library[i].title);
        cout << "Author: ";
        getline(cin, library[i].author);
        cout << "Price: ";
        cin >> library[i].price;
        cout << endl;
    }
    cout << "--- Library Inventory ---" << endl;
    for (int i = 0; i < 3; i++) {
        library[i].printDetails();
    }
    return 0;
}