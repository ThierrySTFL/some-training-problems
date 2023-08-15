#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    char str[n+1];
    cin >> str;

    for (int i =0; i < a-1; i++) cout << str[i];
    for (int i = b-1; i >= a-1; i--) cout << str[i];
    for (int i =b; str[i]!='\0'; i++) cout << str[i];

}
