#include <bits/stdc++.h>
using namespace std;

int main (){

    double dist, nt, soma = 0, avan, pts;
    double nts[5]; // cria uma matriz vazia para as notas

    cin >> dist; // entrada da distancia

    for (int i = 0; i < 5; i++){ // pede as 5 notas e aloca elas na matriz
        cin >> nt;
        nts[i] = nt;
    }
    sort(nts, nts + 5); // coloca em ordem crescente 
    // tira o maior e menor valor (0 no lugar)
    nts[0] = 0;
    nts[4] = 0;
    
    for (int j = 0; j < 5; j++){ // soma todos os valores da matriz resultante 
        soma += nts[j];
    }
    
    avan = 120 - (dist); // diferenca da distancia para a marca fixa de 120 metros
    if (avan > 0){ 
        pts = 60 - (avan * 1.8);
    }else{ // quando a diferença é menor que 0 os pontos precisam ser somados considerando 60 + módulo da difereca*1.8
        pts = 60 + abs(avan * 1.8); // abs() retorna o módulo
    }

    cout << fixed << setprecision(1) << (soma + pts ) << endl;

    return 0;
}