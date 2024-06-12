#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> pilha;
    int numero;

    cout << "Digite uma sequencia de numeros inteiros positivos (digite 0 para parar):\n";

    // Lendo os números até que 0 seja digitado
    do {
        cin >> numero;
        if (numero != 0) {
            pilha.push(numero);
        }
    } while (numero != 0);

    cout << "Numeros na ordem inversa:\n";

    // Imprimindo os números na ordem inversa usando a pilha
    while (!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }

    cout << endl;

    return 0;
}

