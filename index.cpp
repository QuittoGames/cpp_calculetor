#include <iostream>
#include <print>
#include <limits>       // para numeric_limits
#include "Tool/tool.h"  
#include <stdexcept> // pra lançar erro se dividir por zero


using namespace std;

int main() {
    while (true){
        double n1;
        double n2;
        string type_calc;
        double result;

        cout << "Calculetor \n";
        cout << "Digite Um Numero: ";
        cin >> n1;

        cout << "Digite o segundo numero: ";
        cin >> n2;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // limpa buffer

        cout << "Digite o tipo de calculo (+, -, *, /): ";
        getline(cin, type_calc);  // lê linha inteira, evita problemas

        try {
            if (type_calc == "+") {
                cout << "Resultado: " << Tool::sum(n1, n2) << "\n";
            } else if (type_calc == "-") {
                cout << "Resultado: " << Tool::sub(n1, n2) << "\n";
            } else if (type_calc == "*") {
                cout << "Resultado: " << Tool::mul(n1, n2) << "\n";
            } else if (type_calc == "/") {
                cout << "Resultado: " << Tool::div(n1, n2) << "\n";
            } else {
                cout << "Operacao invalida!\n";
                continue; // volta para o começo do loop
            }
        }
        catch (const invalid_argument& e) {
            cout << "Erro: " << e.what() << "\n";
            continue; // volta para o começo do loop
        }

        cout << "\nDeseja fazer outro calculo? (s/n): ";
        string resposta;
        getline(cin, resposta);
        if (resposta != "s" && resposta != "S") {break;}

    }
}
