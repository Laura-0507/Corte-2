#include <iostream>
#include <string>
using namespace std;

int titleToNumber(string columnTitle) {
    int result = 0;
    for (char c : columnTitle) {
        int value = c - 'A' + 1;       // convierte letra a número (A=1, B=2, ...)
        result = result * 26 + value;  // base 26 acumulativa
    }
    return result;
}

int main() {
    string columnTitle;
    cout << "Ingresa el título de la columna (por ejemplo, AB): ";
    cin >> columnTitle;

    cout << "Número correspondiente: " << titleToNumber(columnTitle) << endl;
    return 0;
}
