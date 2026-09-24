#include <iostream>
using namespace std;

int main() {
    int arr[6] = {5, 2, 9, 1, 7, 3};
    int n = 6;
    int inicio = 0;
    int fin = n - 1;
    int aux;
    bool huboIntercambio = true;

    while (huboIntercambio && inicio < fin) {
        huboIntercambio = false;

        for (int i = inicio; i < fin; i++) {
            if (arr[i] > arr[i + 1]) {
                aux = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = aux;
                huboIntercambio = true;
            }
        }
        fin--;

        if (huboIntercambio) {
            huboIntercambio = false;
            for (int i = fin; i > inicio; i--) {
                if (arr[i] < arr[i - 1]) {
                    aux = arr[i];
                    arr[i] = arr[i - 1];
                    arr[i - 1] = aux;
                    huboIntercambio = true;
                }
            }
            inicio++;
        }
    }

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}