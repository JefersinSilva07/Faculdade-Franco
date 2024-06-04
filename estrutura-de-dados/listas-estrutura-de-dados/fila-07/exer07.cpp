#include <iostream>
#include <queue>
#include <string>
#include <locale.h>

void inserirCliente(std::queue<std::string>& fila) {
    std::string nome;
    std::cout << "Digite o nome do cliente: ";
    std::cin.ignore(); // Para ignorar qualquer caractere de nova linha pendente no buffer
    std::getline(std::cin, nome);
    fila.push(nome);
    std::cout << "Cliente " << nome << " foi adicionado à fila.\n";
}

void atenderProximoCliente(std::queue<std::string>& fila) {
    if (fila.empty()) {
        std::cout << "A fila está vazia. Nenhum cliente para atender.\n";
    } else {
        std::string nome = fila.front();
        fila.pop();
        std::cout << "Atendendo cliente: " << nome << "\n";
    }
}

void exibirFila(const std::queue<std::string>& fila) {
    if (fila.empty()) {
        std::cout << "A fila está vazia.\n";
    } else {
        std::queue<std::string> copia_fila = fila;
        std::cout << "Clientes na fila de espera:\n";
        while (!copia_fila.empty()) {
            std::cout << copia_fila.front() << "\n";
            copia_fila.pop();
        }
    }
}

int main() {

    setlocale(LC_ALL,"portuguese");

    std::queue<std::string> fila;
    int opcao;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Inserir cliente na fila\n";
        std::cout << "2. Atender próximo cliente\n";
        std::cout << "3. Exibir fila de espera\n";
        std::cout << "4. Encerrar o programa\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                inserirCliente(fila);
                break;
            case 2:
                atenderProximoCliente(fila);
                break;
            case 3:
                exibirFila(fila);
                break;
            case 4:
                std::cout << "Encerrando o programa...\n";
                break;
            default:
                std::cout << "Opcao invalida. Tente novamente.\n";
        }
    } while (opcao != 4);

    return 0;
}
