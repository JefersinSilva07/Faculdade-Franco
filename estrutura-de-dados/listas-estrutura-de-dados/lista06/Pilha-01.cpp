#include <iostream>
#include <stack>
#include <locale.h>
using namespace std;

void displayMenu() {
    cout << "\nMenu de Op��es:\n";
    cout << "1. Adicionar elemento � pilha\n";
    cout << "2. Remover elemento da pilha\n";
    cout << "3. Ver o elemento do topo\n";
    cout << "4. Verificar se a pilha est� vazia\n";
    cout << "5. Exibir o tamanho da pilha\n";
    cout << "6. Sair\n";
    cout << "Escolha uma op��o: ";
}

int main() {

    setlocale(LC_ALL,"portuguese");
    stack<int> pilha;
    int opcao, elemento;

    while (true) {
        displayMenu();
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o elemento a ser adicionado: ";
                cin >> elemento;
                pilha.push(elemento);
                cout << "Elemento " << elemento << " adicionado � pilha.\n";
                break;

            case 2:
                if (!pilha.empty()) {
                    elemento = pilha.top();
                    pilha.pop();
                    cout << "Elemento " << elemento << " removido da pilha.\n";
                } else {
                    cout << "A pilha est� vazia. N�o h� elementos para remover.\n";
                }
                break;

            case 3:
                if (!pilha.empty()) {
                    cout << "Elemento do topo: " << pilha.top() << endl;
                } else {
                    cout << "A pilha est� vazia.\n";
                }
                break;

            case 4:
                if (pilha.empty()) {
                    cout << "A pilha est� vazia.\n";
                } else {
                    cout << "A pilha n�o est� vazia.\n";
                }
                break;

            case 5:
                cout << "tamanho da pilha: " << pilha.size() << endl;
                break;


            case 6:
                cout << "Saindo do programa.\n";
                return 0;

            default:
                cout << "Op��o inv�lida. Tente novamente.\n";
                break;
        }
    }
    return 0;
}




