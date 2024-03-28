/*#include <iostream>
#include <locale.h>
using namespace std;

//1- Criar um programa que registre informações de vários
// pacientes, incluindo nome, idade e um sintoma específico. O
// programa deve permitir a entrada de dados para múltiplos
// pacientes até que o usuário decida parar.


struct Paciente{
    string nome;
    int idade;
    string sintomas;

};
int main() {
    setlocale(LC_ALL, "Portuguese");

    Paciente paciente;
    char continuar = 's';


    while (continuar == 's' || continuar == 'S') {
        cout << "Digite o nome do Paciente: ";
        getline(cin, paciente.nome);

        cout << "Entre com a Idade: ";
        cin >> paciente.idade;

        cin.ignore();

        cout << "Entre com o Sintômas: ";
        getline(cin, paciente.sintomas);


        cout << "Deseja adicionar outro paciente? (s/n): ";
        cin >> continuar;
        cin.ignore();  // Limpar o newline do buffer de entrada
    }


}*/

 //2- Desenvolver um programa que registre detalhes de livros em
 //uma biblioteca, como título, autor e ano de publicação. O
 //programa deve continuar solicitando informações até que um
 //título de livro específico seja inserido.

 /*#include <iostream>
 #include <locale.h>
 using namespace std;

 struct Livro{
  string titulo;
  string autor;
  int anoPublicacao;
  };

  int main() {
    setlocale(LC_ALL, "Portuguese");
    Livro livro;
    string continuar = "yes";

    while (continuar == "yes" || continuar == "Yes") {

    cout << "Digite o título do livro: ";
    getline(cin, livro.titulo);

   cout << "Digite o ano de publicação: ";
    cin >> livro.anoPublicacao;

    cin.ignore();

   cout << "Digite o autor do livro: ";
    getline(cin, livro.autor);


    cout << "Deseja continuar? (yes/no): ";
    cin >> continuar;
    cin.ignore();  // Limpar o newline do buffer de entrada

    }

  }*/


/*3 - Construir um programa para avaliar filmes, pedindo ao
usuário para avaliar diferentes aspectos como enredo, atuação e
efeitos especiais. Calcule a média das notas avaliadas em
enredo, atuação e efeitos especiais. O programa deve permitir a
avaliação de vários filmes. O programa deve parar quando
usuário não desejar mais continuar.*/

/*#include <iostream>
#include <locale.h>
using namespace std;

struct Filme{
    string nome;
    int atuacao;
    int enredo;
    int efeitos;
};
int main() {
    setlocale(LC_ALL, "Portuguese");

    Filme filme;
    char continuar = 's';
    int totalEnredo, totalAtuacao, totalEfeitos = 0;
    int contador = 0;
    float mediaEnredo, mediaAtuacao, mediaEF = 0;


    while (continuar == 's' || continuar == 'S') {
        cout << "Qual o nome do filme? ";
        getline(cin, filme.nome);


        cout << "de 0 a 10 qual a sua nota para a atuacao? ";
        cin >> filme.atuacao;
        totalAtuacao = totalAtuacao + filme.atuacao;

        cout << "de 0 a 10 qual a sua nota para o enredo? ";
        cin >> filme.enredo;
        totalEnredo = toalEnredo + filme.enredo;

        cout << "de 0 a 10 qual a sua nota para o Efeitos especiais? ";
        cin >> filme.ef;
        totalEfeitos = totalEfeitos + filme.ef;

        contador = contador + 1;
        cin.ignore();

        cout << "Deseja cadastrar mais notas (s/n): ";
        cin >> continuar;
        cin.ignore();
    }

    mediaEnredo = totalEnredo / contador;
    mediaAtuacao = totalAtuacao / contador;
    mediaEF = totalEfeitos / contador;

    cout << "A média das notas do enredo é de: " << mediaEnredo << endl();
    cout << "A média das notas da atuação é de: " << mediaAtuacao << endl();
    cout << "A média das notas dos efeitos especiais é de: " << mediaEF << endl();

}*/




/*4 - Criar um programa para registrar o desempenho de
estudantes em uma disciplina, incluindo nome do estudante,
nota final e se ele foi aprovado ou reprovado. O programa deve
permitir a inserção de dados para vários estudantes até que o
usuário escolha encerrar. Utilize vetor.*/

/*#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Estudante {
    string nome;
    float nota;
    bool aprovado;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    vector<Estudante> estudantes;
    char continuar = 's';
    Estudante estudante;

    while (continuar == 's' || continuar == 'S') {
        cout << "Digite o nome do estudante: ";
        getline(cin, estudante.nome);
        cout << "Digite a nota final do estudante: ";
        cin >> estudante.nota;
        estudante.aprovado = estudante.nota >= 6.0;

        estudantes.push_back(estudante);
        cout << estudante.nome << " foi " << (estudante.aprovado ? "aprovado(a)." : "reprovado(a).") << endl;

        cout << "Deseja adicionar outro estudante? (s/n): ";
        cin >> continuar;
        cin.ignore();  // Limpar o newline do buffer de entrada
    }

    cout << "\nRegistro dos Estudantes:\n";
    for (const auto& e : estudantes) {
        cout << "Nome: " << e.nome << ", Nota: " << e.nota << ", Status: " << (e.aprovado ? "Aprovado" : "Reprovado") << endl;
    }

    return 0;
}*/

/*5 - Implementar um programa para registrar pedidos em um
restaurante, coletando informações como o nome do prato,
quantidade e preço total. O programa deve continuar recebendo
novos pedidos até que um valor específico seja inserido como
preço.*/

#include <iostream>
#include <locale.h>


using namespace std;

struct Pedido {
    string nome;
    int quantidade;
    float preço;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    vector<Pedido> pedido;
    char continuar = 's';
    Pedido pedido;


 while (continuar == 's' || continuar == 'S') {
        cout << "Digite o nome do prato: ";
        getline(cin, pedido.nomeDoPrato);

        cout << "Digite a quantidade : ";
        cin >> pedido.quantidade;
        cin.ignore();

        cout << "Digite o preço : ";
        cin >> pedido.preço;
        cin.ignore();


        cout << "Deseja adicionar outro estudante? (s/n): ";
        cin >> continuar;
        cin.ignore();  // Limpar o newline do buffer de entrada
    }







