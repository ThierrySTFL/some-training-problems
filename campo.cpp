#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, b;
    cin >> m >> n >> b;

    char mat[m+1][n+1];
    int bomb1, bomb2;
    int flag = 0;

    for (int i=0; i<m+1; i++){
        for (int j=0; j<n+1; j++){
            mat[i][j] = '-';
        }
    }

    for (int i = 0; i<b;i++){
        cin >> bomb1 >> bomb2;
        mat[bomb1-1][bomb2-1] = 'B';
    }

    for (int i =0; i<m+1; i++){
        for (int j=0; j<n+1; j++){
            flag = 0;
            if (mat[i][j+1] == 'B' && mat[i][j]!='B')
                flag++;
            if (mat[i+1][j+1] == 'B' && mat[i][j]!='B')
                flag++;
            if (mat[i+1][j] == 'B' && mat[i][j]!='B')
                flag++;
            if (mat[i+1][j-1] == 'B' && mat[i][j]!='B')
                flag++;
            if (mat[i][j-1] == 'B' && mat[i][j]!='B')
                flag++;
            if (mat[i-1][j-1] == 'B' && mat[i][j]!='B')
                flag++;
            if (mat[i-1][j] == 'B' && mat[i][j]!='B')
                flag++;
            if (mat[i-1][j+1] == 'B' && mat[i][j]!='B')
                flag++;
            char cont = '0' + flag;
            if (mat[i][j]!='B' && cont != '0')
                mat[i][j] = cont;
        }
    }

    // cout na matriz
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cout << mat[i][j];
        }
        cout << endl;
    }

}
