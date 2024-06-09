/*#include<iostream>

using namespace  std;

int main ();
{

}*/
#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr, bool crescente) {
    int n = arr.size();
    bool trocado;

    for (int i = 0; i < n - 1; ++i) {
        trocado = false;
        for (int j = 0; j < n - i - 1; ++j) {
            // Compara elementos adjacentes com base na ordem escolhida
            if (crescente ? (arr[j] > arr[j + 1]) : (arr[j] < arr[j + 1])) {
                // Troca os elementos se estiverem na ordem errada
                std::swap(arr[j], arr[j + 1]);
                trocado = true;
            }
        }
        // Se nenhum elemento foi trocado no loop interno, o array está ordenado
        if (!trocado)
            break;
    }
}

int main() {
    std::vector<int> arr;
    int n, temp;
    char ordem;

    std::cout << "Digite o numero de elementos: ";
    std::cin >> n;

    std::cout << "Digite os elementos:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> temp;
        arr.push_back(temp);
    }

    std::cout << "Digite 'c' para ordem crescente ou 'd' para ordem decrescente: ";
    std::cin >> ordem;

    bool crescente = (ordem == 'c' || ordem == 'C');

    bubbleSort(arr, crescente);

    std::cout << "Array ordenado:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
