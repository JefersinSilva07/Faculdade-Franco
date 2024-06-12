#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros(10);
    std::cout << "Digite 10 numeros:\n";

    // Leitura dos números
    for(int i = 0; i < 10; ++i) {
        std::cin >> numeros[i];
    }

    // Ordenação dos números
    std::sort(numeros.begin(), numeros.end());

    // Encontrar o menor número e contar suas ocorrências
    int menor_numero = numeros[0];
    int contagem_menor = std::count(numeros.begin(), numeros.end(), menor_numero);

    // Encontrar o maior número e contar suas ocorrências
    int maior_numero = numeros[9];
    int contagem_maior = std::count(numeros.begin(), numeros.end(), maior_numero);

    // Exibir resultados
    std::cout << "Menor numero: " << menor_numero << " - Aparece " << contagem_menor << " vezes\n";
    std::cout << "Maior numero: " << maior_numero << " - Aparece " << contagem_maior << " vezes\n";

    return 0;
}
