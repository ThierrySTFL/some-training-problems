#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bandeja, total, lata, copo, i = 0;
    
    cin >> bandeja;
    
    do
    {
        cin >> lata >> copo;
        
        if (lata > copo)
        {
            total+= copo;
        }
        i++;
    }while(i < bandeja);
    
    cout << total << endl;
    
    return 0;
}