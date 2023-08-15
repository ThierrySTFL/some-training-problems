#include <bits/stdc++.h>
using namespace std;

int main()
{
    char nome[60];

    while (true){
        cin.getline(nome,60);
        if (nome[1] == 'z' && nome[2] == 'z'){
            return 0;
        }

        if (nome[1] == tolower(nome[4]) && nome[2] == tolower(nome[5])){
            cout << "Ok" << endl;
            }
        if (nome[1] != tolower(nome[4]) && nome[2] == tolower(nome[5])){
            cout << "No" << endl;
            }

        if(nome[1] != tolower(nome[4]) && nome[2] != tolower(nome[5])){
            cout << "No" << endl;
        }
        if(nome[1] == tolower(nome[4]) && nome[2] != tolower(nome[5])){
            int cont = 0;
            for (int i = 5; nome[i]!='\0'; i++){
                if (tolower(nome[i]) == nome[2]){
                    cout << "Ok" << endl;
                    cont++;
                    break;
                }
            }
            if (cont == 0) cout << "No" << endl;
        }
    }

}
