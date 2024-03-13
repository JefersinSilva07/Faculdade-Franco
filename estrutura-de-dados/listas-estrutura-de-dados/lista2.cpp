#include <iostream>

using namespace std;
#define TAMANHOVETOR 10
//1. Escreva um programa em C++ que permita a leitura dos nomes de 10
//pessoas e armaze os nomes lidos em um vetor. Após isto, o algoritmo
//deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
//escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
//anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    string nomes [TAMANHOVETOR] = {};
    string procurarNome;
    bool nomeEncontrado = false;

    for(int i = 0; i < TAMANHOVETOR; i++)
    {
        cout <<"Digite o "<<i+1<<"° nome: ";
        cin >> nomes[i];
    }
    cout <<"Digite a pessoa que deseja encontrar: ";
    cin >> procurarNome;

    for(int i = 0; i < TAMANHOVETOR; i++)
    {
        if (nomes[i] == procurarNome)
        {
          nomeEncontrado = true;
        }

    }

    if (nomeEncontrado == true)
    {
        cout <<"Achei!! ";

    }
    else{
            cout <<"Não Achei";}



}
