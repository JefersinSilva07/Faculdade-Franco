#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void animalInfo();
void infodeEndereco();
void vetorInteiros();
int escolhaCor();

int main(){
    int codigo;
    setlocale(LC_ALL, "portuguese");

    cout<<" 2- Exercicio 1 Informa��es Animais \n 3- Exercicio 2 Estrutura Endereco \n 4- Exercicio 3 Vetor Inteiros \n 5- Exercicio 4 Escolha Cor"<<endl;
    cout<<endl;
    cout<<"Escolha o exercicio: ";
    cin>>codigo;
    cout<<endl;

    switch(codigo){

    case 1:
        animalInfo();
    break;
    case 2:
        infodeEndereco();
    break;
    case 3:
        vetorInteiros();
    break;
    case 4:
        escolhaCor();
    break;

    }

}

/*2. Suponha que voc� est� desenvolvendo um programa para armazenar
 informa��es sobre animais em um zool�gico. Crie uma estrutura chamada
 Animal que deve armazenar as seguintes informa��es sobre cada animal:


 Nome do animal (string)
 Esp�cie do animal (string)
 Idade do animal (int)
 Peso do animal em kg (float)

 Em seguida, crie um typedef para uma lista de animais chamada ListaAnimais,
 que deve ser um vetor de 10 elementos do tipo Animal.
 Por fim, crie um programa que pede ao usu�rio para digitar os dados de 10
 animais e armazena esses dados em uma vari�vel do tipo ListaAnimais.
 Ao final, o programa deve exibir os dados de cada um dos 10 animais na tela.*/

void animalInfo(){

    struct Animal{

        string nome, especie;
        int idade;
        float peso;

    };

    const int numeroAnimais = 10;
    typedef Animal ListaAnimais[numeroAnimais];

    ListaAnimais animais;

    for(int i = 0; i < 2; i++){

        cout<<"Digite o nome: ";
        cin>>animais[i].nome;

        cout<<"Digite a especie: ";
        cin>>animais[i].especie;

        cout<<"Digite a idade: ";
        cin>>animais[i].idade;

        cout<<"Digite o peso: ";
        cin>>animais[i].peso;

    }

    for(int i = 1; i <= 2; i++){

        cout<<"Animal "<<i<<" nome: "<<animais[i].nome<<endl;
        cout<<"Animal "<<i<<" especie: "<<animais[i].especie<<endl;
        cout<<"Animal "<<i<<" idade: "<<animais[i].idade<<endl;
        cout<<"Animal "<<i<<" peso: "<<animais[i].peso<<endl;
    }
}

/*3. Crie uma estrutura chamada Endereco que armazene os
 campos rua, cidade e CEP. Em seguida, crie um typedef para
 Endereco chamado TipoEndereco. Crie um programa que solicite
 ao usu�rio que insira informa��es de endere�o e as armazene
 em uma vari�vel do tipo TipoEndereco.*/

void infodeEndereco(){

    struct Endereco{
        string rua, cidade, cep;
    };

    typedef Endereco TipoEndereco;

    TipoEndereco endereco;

    for(int i = 0; i < 1; i++ ){
        cout<<"Digite a rua: ";
        cin.ignore();

        getline(cin, endereco.rua);

        cout<<"Digite a cidade: ";
        cin.ignore();

        getline(cin, endereco.cidade);

        cout<<"Digite a cep: ";
        cin>>endereco.cep;
    }

    for(int i = 0; i < 1; i++ ){

        cout<<"rua: "<<endereco.rua<<endl;
        cout<<"cidade: "<<endereco.cidade<<endl;
        cout<<"cep: "<<endereco.cep<<endl;
    }

}

/*4. Crie um typedef para um vetor de inteiros chamado
 VetorInteiros. Em seguida, crie um programa que declare e
 inicialize um vetor de 5 inteiros usando o typedef e exiba os
 valores na tela.*/


void vetorInteiros(){

    typedef int vetorInteiro;

    vetorInteiro vetor[5]={1,2,3,4,5};

    for(int i = 0; i < 5; i++){
        cout<<vetor[i]<<endl;
    };

}

/*5. Crie uma enumera��o chamada Cores para representar cores
 b�sicas (por exemplo, vermelho, verde, azul). Em seguida, crie
 um typedef para Cores chamado TipoCor. Crie um programa que
 permita ao usu�rio escolher uma cor usando o typedef e exiba a
 cor escolhida na tela.*/

int escolhaCor(){

    int cor;

    typedef enum {vermelho, verde, azul} Cores;

    Cores TipoCor;

        cout<<"Escolha umar cor: \n 1- Vermelho\n 2- Verde \n 3- Azul"<<endl;
        cin>>cor;

        if(cor > 0 && cor < 3 ){
            TipoCor = static_cast<Cores>(cor - 1);
        }else{
            cout<<"Numero invalido!"<<endl;
        }

        cout<<"Voce escolheu: ";

        switch(TipoCor){
            case vermelho: cout<<"Vermelho!"<<endl; break;
            case verde: cout<<"Verde!"<<endl; break;
            case azul: cout<<"Azul!"<<endl; break;
        }
}
