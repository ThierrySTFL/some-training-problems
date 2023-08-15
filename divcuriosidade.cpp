#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int number;
    
    cin >> number;
    
    for(long long int i = 1; i <= number; i++)
    {
        if(number%i==0)
        {
            cout << i << " ";
        }
    }
    
    return 0;
}