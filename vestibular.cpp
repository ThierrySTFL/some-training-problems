#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q, cont = 0;
    cin >> q;

    char str1[q+1],str2[q+1];

    cin >> str1;
    cin >> str2;

    for (int i = 0; i < q; i++) if (str1[i]==str2[i]) cont++;

    cout << cont << endl;

}
