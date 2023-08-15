#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p1[2];
    int p2[2];
    int fim[2];

    cin >> p1[0] >> p1[1] >> p2[0] >> p2[1] >> fim[0] >> fim[1];

    // saber se algum cabe dentro do final

    int maiorp1 = max(p1[0], p1[1]);
    int maiorp2 = max(p2[0], p2[1]);

    int maiorx = max(maiorp1, maiorp2);
    int maiory = min(p1[0], p1[1]) + min(p2[0], p2[1]);

    cout << maiorx << " " << maiory << endl;
    int cont1 = 0;
    int cont2 = 0;
    //(fim[1] < maiorx && fim[0] <= maiory)
    if ((fim[0] < maiorx && fim[1] <= maiory))
        cont1++;
    else if (fim[0] <=(maiorp1 + maiorp2) && (fim[1] < min(maiorx, maiory)))
        cont2++;
    cout << cont1 << " " << cont2 << endl;
    if (cont1 >0 || cont2 > 0)
        cout << "S" << endl;
    else
        cout << "N" << endl;

// tenho que olhar se cabe em cada um, se cabe na costura paralena (em pé e deitado) (dois casos de costura paralela)






}
