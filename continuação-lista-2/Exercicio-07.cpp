#include <iostream>

using namespace std;

int main()
{
  // entrei com a Variavel de um vetor de 10 casas come�ando do 0 ao 9//
  int vetor [10];

  // fiz uma estrutura de repeti��o que vai percorrer cada vetor //
  for(int i = 0; i < 10; i++)
  {
      // solicitei o usuario a colocar os valores //
      cout << "Entre com os valores: ";
      // salvei a variavel no indice 0 para ir do 0 ao 9//
      cin >> vetor [i];
  }
  // adicionei outra estrutura de repeti��o para printar so os indices na tela//
  for(int i = 0; i < 10; i++)
  {
      //salvei os indices da variavel de 0 a 10//
      cout << vetor [i] << " ";
  }
  cout << endl;
  for(int i = 10; i >= 0; i--)
  {
      cout << vetor [i] << " ";
  }


}
