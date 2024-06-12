#include <iostream>
#include <list>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"portuguese");

    std::list<int> numeros;
    int numero;

    // Solicitar ao usu�rio que digite 5 n�meros inteiros
    std::cout << "Digite 5 numeros inteiros:\n";
    for (int i = 0; i < 5; ++i) {
        std::cin >> numero;
        numeros.push_back(numero);
    }

    // Exibir os n�meros na ordem de inser��o
    std::cout << "N�meros na ordem de inser��o:\n";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // Exibir os n�meros na ordem inversa
    std::cout << "N�meros na ordem inversa:\n";
    for (auto it = numeros.rbegin(); it != numeros.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    return 0;
}
