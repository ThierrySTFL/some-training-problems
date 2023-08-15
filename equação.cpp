#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    double A, B, C, delta, x1, x2;

    // leitura dos valores de a, b e c
    cin >> A >> B >> C;

    delta = (pow(B, 2)) - 4 * A * C;

    if (delta > 0)
    {
        x1 = (-B + sqrt(delta)) / (2 * A);
        x2 = (-B - sqrt(delta)) / (2 * A);
        cout << fixed << setprecision(2) << x2 << " " << x1 << endl;
    }
    else if (delta == 0)
    {
        x1 = -B / (2 * A);
        cout << fixed << setprecision(2) << x1 << endl;
    }
    else
    {
        cout << "Nao ha raiz real" << endl;
    }

}
