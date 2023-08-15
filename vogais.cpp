#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[51], ac[51], er[51];
    int  p1=0 , p2=0;

    cin >> str;

    cout << "Vogais: ";
    for (int i = 0; i<strlen(str); i++)
    {
        if (str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u') cout << str[i];
    }
    cout << endl;
    cout << "Consoantes: ";
        for (int i = 0; i<strlen(str); i++)
    {
        if (!(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')) cout << str[i];
    }
    cout << endl;
}
