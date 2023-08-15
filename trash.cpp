#include <bits/stdc++.h>
using namespace std;

int nummatricula(char s[])
{
    int inicio;
    if (s[0]=='E')
        inicio = 2;
    else
        inicio = 0;
    int f = 0;
    string val;
    for(int i=inicio; s[i]!='\0';i++)
    {
        val[f] = s[i];
        f++;
    }
    int valor = stoi(val);
    return valor;
}

int main()
{
    char s[20];
    cin >> s;

    cout << nummatricula(s) << endl;

}
