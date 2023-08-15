#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int larg, compr;
    int area;
    int res1, res2, totalp1, totalp2;
    
    cin >> larg;
    cin >> compr;
    
    area = larg*compr;
    
    res1 = larg/1;
    res2 = compr/1;
    
    totalp1 = (res1*res2)+((res1 - 1)*(res2 - 1));
    totalp2 = (2*(res2 - 1)) + (2*(res1 - 1));
    
    cout << totalp1 << endl;
    cout << totalp2 << endl;
    
    return 0;
}