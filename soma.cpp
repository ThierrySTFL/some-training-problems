#include <iostream>
using namespace std;

int main()
{

    int val, i = 0;
    double num, soma = 0;

    cin >> val;

    do{
        cin >> num;
        soma += num;
        i++;
    }while(i < val);

    cout << soma << endl;

    return 0;
}
