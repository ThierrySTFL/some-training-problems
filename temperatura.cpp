#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    double temp, resultado;
    char E;
    
    cin >> temp >> E;

    
    if (toupper(E) == 'F') // Fahrenheit para Celcius
    {
        resultado = (temp - 32.0) * 5.0/9.0;  
        cout << fixed << setprecision(1) << resultado << " C" << endl;
    }
    else if (toupper(E) == 'C') // Celcius para Fahrenheit
    {
        resultado = (temp*(9.0/5.0)) + 32.0;
        cout << fixed << setprecision(1) << resultado << " F" << endl;
    }

    
      
}
