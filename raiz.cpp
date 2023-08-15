#include <bits/stdc++.h>
using namespace std;

int main()
{
    int val, i = 0;
    double num;
    
    cin >> val;
    double array[val]{};
    
    do
    {
        cin >> num;
        array[i] = num;
        i++;
        
    }while(i < val);
    
    for (int j =0; j < val; j++)
    {
        cout << fixed << setprecision(4) << pow(array[j], (1.0/2)) << endl;
        
    }
    
    

    return 0;
}
