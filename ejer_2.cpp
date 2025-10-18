#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX; // precio más bajo hasta el momento
    int maxProfit = 0;      // mejor ganancia encontrada

    for (int price : prices) {
        if (price < minPrice) {
            minPrice = price; // actualiza el precio mínimo
        } else if (price - minPrice > maxProfit) {
            maxProfit = price - minPrice; // calcula la ganancia si vendes hoy
        }
    }

    return maxProfit;
}

int main() {
    int n;
    cout << "Número de días: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Ingresa los precios: ";
    for (int i = 0; i < n; i++) cin >> prices[i];

    cout << "Ganancia máxima: " << maxProfit(prices) << endl;
    return 0;
}
