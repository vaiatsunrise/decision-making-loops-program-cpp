#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter x and y coordinates: ";
    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "Quadrant I";
    else if (x < 0 && y > 0)
        cout << "Quadrant II";
    else if (x < 0 && y < 0)
        cout << "Quadrant III";
    else if (x > 0 && y < 0)
        cout << "Quadrant IV";
    else if (x == 0 && y == 0)
        cout << "Origin";
    else if (x == 0)
        cout << "On Y-axis";
    else if (y == 0)
        cout << "On X-axis";

    return 0;
}
