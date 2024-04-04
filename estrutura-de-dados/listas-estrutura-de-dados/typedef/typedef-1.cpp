#include <iostream>
#include <locale.h>
using namespace std;



 /*1. Crie uma estrutura chamada pessoa que seja capaz de
armazenar o nome, o endereço, o CPF e a idade de 5
pessoas.*/


struct Pessoa{
    string nome;
    string endereco;
    string cpf;
    int idade;
};


int main()
 {
   setlocale(LC_ALL, "Portuguese");

   Pessoa pessoa;
    char continuar = 's';


   while(continuar == 's' || continuar == 'S'){

   cout << "Entre com o nome: ";
   getline(cin,pessoa.nome);

   cout << "Entre com o Endereço: ";
   getline(cin,pessoa.endereco);

   cout << "Entre com o CPF: ";
   getline(cin,pessoa.cpf);

   cout << "Entre com a Idade: ";
   cin >> pessoa.idade;

   cin.ignore();

   cout << "Deseja adicionar infomações de outa pessoa? (s/n): ";
   cin >> continuar;
   cin.ignore();

   }
 }
