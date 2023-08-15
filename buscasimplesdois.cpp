#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vet[10];
    int id[10]{};
    int comp;

    for (int & i : vet)
        cin >> i;

    cin >> comp;

    int flag = 0;
    for (int i=0; i<10; i++){
        if (vet[i]==comp)
            flag++;
    }

    if (flag==0)
        cout << "Mia x" << endl;
    else {
        cout << flag << endl;

        for (int i = 0; i < 10; i++) {
            if (vet[i] == comp)
                cout << i << " ";
        }
    }

}

