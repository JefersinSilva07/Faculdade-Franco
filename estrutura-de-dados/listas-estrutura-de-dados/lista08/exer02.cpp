#include <iostream>
#include <list>
#include <algorithm>
#include <locale.h>

struct Funcionario {
    std::string nome;
    int id;

    // Sobrecarga do operador < para ordenar por id
    bool operator<(const Funcionario& outro) const {
        return id < outro.id;
    }
};

void imprimirLista(const std::list<Funcionario>& lista) {
    for (const auto& funcionario : lista) {
        std::cout << "ID: " << funcionario.id << ", Nome: " << funcionario.nome << "\n";
    }
}

int main() {
    setlocale(LC_ALL,"portuguese");

    std::list<Funcionario> funcionarios;
    int numFuncionarios;

    std::cout << "Quantos funcionários serão cadastrados? ";
    std::cin >> numFuncionarios;

    if (numFuncionarios <= 0) {
        std::cout << "Lista vazia. Nenhum funcionário será cadastrado.\n";
        return 0;
    }

    for (int i = 0; i < numFuncionarios; ++i) {
        Funcionario func;
        std::cout << "Digite o ID do funcionário: ";
        std::cin >> func.id;
        std::cin.ignore();  // Ignorar o caractere de nova linha após o ID
        std::cout << "Digite o nome do funcionário: ";
        std::getline(std::cin, func.nome);
        funcionarios.push_back(func);
    }

    std::cout << "\nLista de funcionários na ordem de cadastro:\n";
    imprimirLista(funcionarios);

    funcionarios.sort();
    std::cout << "\nLista de funcionários ordenada por ID:\n";
    imprimirLista(funcionarios);

    std::cout << "\nLista de funcionários na ordem reversa:\n";
    for (auto it = funcionarios.rbegin(); it != funcionarios.rend(); ++it) {
        std::cout << "ID: " << it->id << ", Nome: " << it->nome << "\n";
    }

    std::cout << "\nNúmero total de funcionários cadastrados: " << funcionarios.size() << "\n";

    return 0;
}
