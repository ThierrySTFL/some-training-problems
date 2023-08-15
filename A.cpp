#include <bits/stdc++.h>
using namespace std;

struct Contatos{
    char nome[16];
    char sobre[16];
    int tel;
};

int main()
{
    int n;
    cin >> n;
    Contatos ctt[n], aux;
    char p[2];


    for (int i = 0; i < n; i++){
        cin >> ctt[i].sobre >> p[0] >> ctt[i].nome >>p[1]>> ctt[i].tel;
    }

    for (int i = 0; i < n-1; i++){
        for (int j = i; j < n-1; j++){
            if (strcmp(ctt[j].nome, ctt[j+1].nome) > 0){
                aux = ctt[j];
                ctt[j] = ctt[j+1];
                ctt[j+1] = aux;
            }
        }
    }

    for (int i =0; i < n; i++){
        cout << ctt[i].nome << " " << ctt[i].sobre << " " << ctt[i].tel << "\n";
    }
}
