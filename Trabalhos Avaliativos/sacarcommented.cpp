#include <bits/stdc++.h>
using namespace std;

int main (){

    float val;
    int din[12]{10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1}; // dinheiro*100 (alocar em uma matriz só)
    
    cin >> val;
    
    val*=100; // entrada*100 (igualar com a escala da matriz para comparação)
    
    for (int i = 0; val!=0 && din[i]>=1; i++){ // entra quando valor não é 0 e valor na posição i é maior que 0
        if (din[i] <= val){ // entra quando o valor na posição i é menor ou igual a entrada
            val -= din[i];
            val+=0.00001; // correção do float
            if (din[i] >= 200){ // separa as notas das moedas e imprime com a letra certa
                cout << "C " << din[i]/100 << endl;
            }else if (din[i] <= 100){
                cout << "M " << din[i] << endl;    
            }
            i-=1; // usado pra testar a mesma posição varias vezes até que nao atenda os criterios do if
        }
    }
    
    return 0;
}