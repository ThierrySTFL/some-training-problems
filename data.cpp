#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

    double dia, mes;
    double resul;
    double DIACERTO {20};
    double MESCERTO {3};
    
    cin >> dia >> mes;
    
    if ((mes < MESCERTO) || (dia < DIACERTO && mes <= MESCERTO))
    {
        cout << "antes" << endl;
    } else if (dia == 20 && mes == 3 )
    {
        cout << "no dia" << endl;
    }else
    {
        cout << "depois" << endl;    
    }
    
    
}
