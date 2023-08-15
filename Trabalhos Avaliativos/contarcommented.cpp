#include <bits/stdc++.h>
using namespace std;

int main (){

    double val, total = 0;
    char inf;
    
   do{
        cin >> inf >> val;
        if (val == 100 && toupper(inf) == 'M' ){ // considerar M100 como 1
            val = 1.00;
            total += val;
        }
        else if (toupper(inf) == 'M'){ // valor da moeda é / por 100
            total += (val/100);
        }
        else if (toupper(inf) == 'C'){ // valor da cedula apenas soma
            total += val;
        }
        
    }while (val != 0); // faz o do primeiro e continua fazendo caso valor de entrada seja diferente de 0
    
    cout << fixed << setprecision(2) << "R$" <<total << endl;
    
    return 0;
}