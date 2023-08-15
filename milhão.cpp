#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dia, ace, i = 0, tot = 0, f = 0, diaflag;
    
    cin >> dia;
    
    while (i < dia)
    {
        cin >> ace;
        tot += ace;
        i++;
        if (tot >= 1000000 && f == 0)
        {
            diaflag = i;
            f++;
        }
    }
    
    cout << diaflag << endl;
    
    return 0;
}