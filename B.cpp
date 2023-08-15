#include <bits/stdc++.h>
using namespace std;



int main()
{
    int m, n;
    cin >> m >> n;
    int mat[m][n];
    int pref[n], sem[m]{0}, cont=0, maior = 0;

    for (int i =0; i< m; i++){
        for (int j =0; j< n; j++){
            cin >> mat[i][j];
        }
    }

    for (int i =0; i < n; i++) cin >> pref[i];

    for (int i =0; i< n; i++){
        for (int j =0; j< m; j++){
            if (pref[i] == mat[j][i]) {
                sem[j]++;
            }
        }
    }


    for (int i = 0; i < m; i++){
        if (sem[i] > maior) maior = sem[i];
    }
    for (int i = 0; i < m; i++){
        if (sem[i] == maior) {
            cout << i+1 << endl;
            break;
        }
    }



}
