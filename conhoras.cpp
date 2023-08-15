#include <bits/stdc++.h>
using namespace std;

//Converte seg segundos em h horas m minutos s segundos

void convhoras(int seg, int &h, int &m, int &s){

    h = seg/3600;
    seg -= h*3600;
    m = seg/60;
    seg -= m*60;
    s = seg;

}


int main()
{
    int seg, h=0, m=0, s=0;
    cin >> seg;
    convhoras(seg,h,m,s);

    cout  << setfill('0') <<
    setw(2) << h << ":" <<
    setw(2) << m << ":" <<
    setw(2) << s << endl;


    return 0;
}
