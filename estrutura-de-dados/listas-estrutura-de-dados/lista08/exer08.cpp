#include <iostream>
#include <list>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"portuguese");

    std::list<int> numeros;
    int numero;

    // Solicitar ao usuário que digite 5 números inteiros
    std::cout << "Digite 5 numeros inteiros:\n";
    for (int i = 0; i < 5; ++i) {
        std::cin >> numero;
        numeros.push_back(numero);
    }

    // Exibir os números na ordem de inserção
    std::cout << "Números na ordem de inserção:\n";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // Exibir os números na ordem inversa
    std::cout << "Números na ordem inversa:\n";
    for (auto it = numeros.rbegin(); it != numeros.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    return 0;
}
