#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
  double diametro_bola, altura_caixa, largura_caixa, profundidade_caixa;
  cin >> diametro_bola;
  cin >> altura_caixa >> largura_caixa >> profundidade_caixa;
  bool cabe_na_altura = diametro_bola <= altura_caixa;
  bool cabe_na_largura = diametro_bola <= largura_caixa;
  bool cabe_na_profundidade = diametro_bola <= profundidade_caixa;
  if (cabe_na_altura && cabe_na_largura && cabe_na_profundidade)
    {
      cout << "S" << endl;
    }
  else
    {
      cout << "N" << endl;
    }
}
