#include <bits/stdc++.h>
using namespace std;

int main()
{
    char p1[101], p2[101];

    cin >> p1;
    cin >> p2;

    int dif = 0, tam1=0, tam2=0;

    for (int i = 0; p1[i]!='\0'; i++) tam1++;

    for (int i = 0; p2[i] !='\0'; i++) tam2++;

    for (int i = 0; p1[i]!='\0' && p2[i]!='\0'; i++)
        if(p1[i]!=p2[i]) dif++;

    if  (tam1 == tam2 && dif == 1) cout << "SIM" << endl;
    else  cout << "NAO" << endl;


}
