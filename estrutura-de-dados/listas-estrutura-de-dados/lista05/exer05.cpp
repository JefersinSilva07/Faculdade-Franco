#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros(10);
    std::cout << "Digite 10 numeros:\n";

    // Leitura dos n�meros
    for(int i = 0; i < 10; ++i) {
        std::cin >> numeros[i];
    }

    // Ordena��o dos n�meros
    std::sort(numeros.begin(), numeros.end());

    // Encontrar o menor n�mero e contar suas ocorr�ncias
    int menor_numero = numeros[0];
    int contagem_menor = std::count(numeros.begin(), numeros.end(), menor_numero);

    // Encontrar o maior n�mero e contar suas ocorr�ncias
    int maior_numero = numeros[9];
    int contagem_maior = std::count(numeros.begin(), numeros.end(), maior_numero);

    // Exibir resultados
    std::cout << "Menor numero: " << menor_numero << " - Aparece " << contagem_menor << " vezes\n";
    std::cout << "Maior numero: " << maior_numero << " - Aparece " << contagem_maior << " vezes\n";

    return 0;
}
