#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

double StepsToMiles(int steps) {
    if (steps < 0) {
        throw runtime_error("Exception: Negative step count entered.");
    }
    return static_cast<double>(steps) / 2000.0;
}

int main() {
    int steps;
    cin >> steps;
    cout << fixed << setprecision(2);
    try {
        double miles = StepsToMiles(steps);
        cout << miles << endl;
    } catch (runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}
