#include <iostream>
using namespace std;

int main() {
    float temperature, pressure;

    cout << "Enter temperature (°C): ";
    cin >> temperature;

    cout << "Enter pressure (PSI): ";
    cin >> pressure;

    if (temperature > 100 || pressure > 250) {
        cout << "Machine Status: SHUT DOWN";
    }
    else if ((temperature >= 85 && temperature <= 100) &&
             (pressure >= 200 && pressure <= 250)) {
        cout << "Machine Status: WARNING MODE";
    }
    else {
        cout << "Machine Status: NORMAL OPERATION";
    }

    return 0;
}
