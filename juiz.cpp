#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[1001], str2[1001];
    int tam1=0, tam2=0;
    bool f=true, s=true;

    cin.getline(str1,1001);
    cin.getline(str2,1001);

    int  igual = strcmp(str1,str2);

    int des = 0;
    for (int i = 0; str1[i]!='\0'; i++)
    {
        if (str1[i] != ' ')
        {
            str1[des] = str1[i];
            des++;
        }
    }
    str1[des] = '\0';
    int des2 = 0;
    for (int i = 0; str2[i]!='\0'; i++)
    {
        if (str2[i] != ' ')
        {
            str2[des2] = str2[i];
            des2++;
        }
    }
    str2[des2] = '\0';
    int  igualnospace = strcmp(str1,str2);

    if (igual==0) cout << "Accepted" << endl;
    else if  (igualnospace==0) cout << "Presentation Error" << endl;
    else cout << "Wrong Answer" << endl;

}
