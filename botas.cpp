#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int tam[n];
    char pe[n];

    for (int i=0; i<n; i++)
    {
        cin >> tam[i];
        cin >> pe[i];
    }

    int cont = 0;
    for (int i = 0; i<n; i++){
        for (int j = i+1; j<n; j++){

            if (tam[i] == tam[j] && pe[i]!=pe[j]){
                cont++;
                tam[i]= 99999+i;
                tam[j]= 99999+j;
                break;
            }
        }
    }

    cout << cont << endl;

}
