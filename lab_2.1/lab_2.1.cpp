#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double PI = acos(-1.0);

    double alpha;

    cout << "Введіть кут alpha (в радіанах): ";
    cin >> alpha;

    double sin_part = sin(3.0 * PI - 2.0 * alpha);
    double cos_part = cos(5.0 * PI + 2.0 * alpha);
    double z1 = 2.0 * pow(sin_part, 2) * pow(cos_part, 2);

    double z2 = 0.25 - 0.25 * sin((5.0 / 2.0) * PI - 8.0 * alpha);

    

    return 0;
}