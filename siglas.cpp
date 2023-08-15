#include <bits/stdc++.h>
using namespace std;

int main()
{
    char sigla[201], word[201];
    cin.getline(sigla, 201);
    cin.getline(word, 201);

    int ult =0;
    bool f = false;
    for(int i = 0 ; sigla[i] != '\0' ; i++)
    {
        f = false;
        for(int j = ult ; word[j] != '\0' ; j++)
        {
            if (word[j] == sigla[i])
            {
                f = true;
                ult = j+1;
                break;
            }

        }
        if(!f)
            break;
    }

    if(f)
        cout << "SIM" << endl;
    else
        cout << "NAO"<< endl;
}
