#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;

    // Caso base: al menos una fila
    for (int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1); // cada fila comienza y termina con 1
        for (int j = 1; j < i; j++) {
            // cada elemento es la suma de los dos de arriba
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(row);
    }
    return triangle;
}

int main() {
    int numRows;
    cout << "Ingresa el número de filas: ";
    cin >> numRows;

    vector<vector<int>> result = generate(numRows);

    for (const auto &row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;

    // Caso base: al menos una fila
    for (int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1); // cada fila comienza y termina con 1
        for (int j = 1; j < i; j++) {
            // cada elemento es la suma de los dos de arriba
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(row);
    }
    return triangle;
}

int main() {
    int numRows;
    cout << "Ingresa el número de filas: ";
    cin >> numRows;

    vector<vector<int>> result = generate(numRows);

    for (const auto &row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
