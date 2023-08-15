#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, p;

    cin >> n1 >> n2;



    for (int i = -999999998;  ; i++)
        {
        p = abs(i);
        if (((n1+n2+i)/3==n1)){
            cout << i << endl;
            break;}
        else if (((n1+n2+i)/3==n2)){
            cout << i << endl;
            break;}
        else if (((n1+n2+i)/3==i)){
            cout << i << endl;
            break;}

        //ir de um lado para o outro
        }
}
