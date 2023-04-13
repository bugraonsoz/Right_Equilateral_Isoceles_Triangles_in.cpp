#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");

    double a, b, c;
    int start;

    do {
        cout << "Enter the value of a." << endl;
        cin >> a;

        cout << "Enter the value of b." << endl;
        cin >> b;

        cout << "Enter the value of c." << endl;
        cin >> c;

        if (a + b > c && a + c > b && b + c > a) {
            if (c == sqrt(a * a + b * b)) {
                cout << "This is a Right Triangle and c is hypotenuse." << endl;
            }
            else if (a == sqrt(b * b + c * c)) {
                cout << "This is a Right Triangle and a is hypotenuse." << endl;
            }
            else if (b == sqrt(a * a + c * c)) {
                cout << "This is a Right Triangle and b is hypotenuse." << endl;
            }
            else if ((a == b) && (b == c)) {
                cout << "This is a Equilateral Triangle." << endl;
            }
            else if ((a == b) && (b != c)) {
                cout << "This is a Isosceles Triangle." << endl;
            }
            else if ((b == c) && (c != a)) {
                cout << "This is a Isosceles Triangle." << endl;
            }
            else if ((a == c) && (c != b)) {
                cout << "This is a Isosceles Triangle." << endl;
            }
            else {
                cout << "This is a triangle with edges a, b and c" << endl;
                cout << "a side: " << a << endl;
                cout << "b side: " << b << endl;
                cout << "c side: " << c << endl;
            }
        }
        else {
            cout << "This is not a Triangle." << endl;
        }

        do {
            cout << "Do you want continue? For continue press 1 , press 0 for exit." << endl;
            cin >> start;
            if (start != 0 && start != 1) {
                cout << "Please enter a valid value (0 or 1)." << endl;
            }
        } while (start != 0 && start != 1);

    } while (start == 1);

    cout << "Good Bye.." << endl;
    return 0;
}