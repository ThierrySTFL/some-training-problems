#include <bits/stdc++.h>
using namespace std;

int main()
{
    int inicio, comp;
    char string[101];

    cin >> string >> inicio >> comp;

    for (int i = inicio; i < (inicio+comp); i++)
    {
        cout << string[i];
    }
    cout << endl;
}
