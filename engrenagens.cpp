#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

  int A, B;
  double teste;

  cin >> A >> B;

  // processamento 

  teste = B % A;


  if (teste == 0)
    {
      cout << "1" << endl;
    }
  else
    {
      cout << "0" << endl;
    }
}