#include <bits/stdc++.h>
using namespace std;

bool alf(char str[])
{
    bool f = true;
    for (int i=0; str[i] != '\0'; i++)
    {
        if (str[i+1]!='\0')
            if (str[i] >= str[i+1]) f=false;
    }
    return f;
}

int main()
{
    char str[43];

    cin >> str;

    if (alf(str)) cout << "S" << endl;
    else cout << "N" << endl;

}
