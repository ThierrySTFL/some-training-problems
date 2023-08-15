#include <iostream>
#include <string>
using namespace std;

int main(){

    double dia, mes;
    
    cin >> dia >> mes;
    
    // matriz de strings contendo os meses do ano
    string ano[12]{"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro","novembro", "dezembro"};
    
    int i = mes - 1; // mes -1 = indice i que deve ser pesquisado na matriz

    cout << dia << " de " << ano[i] << endl; //imprime a string referente ao indice i
    
    // separa as estações do ano e classifica as datas
    if ((mes >=4 && mes <=5)||((mes == 3 && dia >= 20)||(mes ==6 && dia < 21))){
        cout << "Outono" << endl;
    }else if ((mes >=7 && mes <=8)||((mes == 6 && dia >= 21)||(mes ==9 && dia < 23))){
        cout << "Inverno" << endl;
    }else if ((mes >=10 && mes <=11)||((mes == 9 && dia >= 23)||(mes ==12 && dia < 22))){
        cout << "Primavera" << endl;
    }else if ((mes >=1 && mes <=2)||((mes == 12 && dia >= 22)||(mes ==3 && dia < 20))){
        cout << "Verao" << endl;
    }


    return 0;
}