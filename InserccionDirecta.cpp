#include <iostream>
using namespace std;

int main() {
    int arr[6] = {5, 2, 9, 1, 7, 3};
    int n = 6;
    int clave;
    int j;

    for (int i = 1; i < n; i++) {
        clave = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > clave) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = clave;
    }

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}