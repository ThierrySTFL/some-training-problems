#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int idmon, id1, id2, id3;
    
    cin >> idmon;
    cin >> id1;
    cin >> id2;
    
    id3 = idmon -(id1 + id2);
    
    if (id3 >= id1 && id3 >= id2)
    {
        cout << id3 << endl; 
    }else
        if (id1 > id2)
            cout << id1 << endl;
        else
            cout << id2 << endl; 
            
    return 0;
}