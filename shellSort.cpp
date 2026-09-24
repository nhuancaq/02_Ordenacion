//metodo de shell

#include <iostream>
using namespace std;

void ShellSort(int A[], int n);

int main() {
    int n = 6;
    int A[7] = {0, 5, 2, 9, 1, 7, 3};

    ShellSort(A, n);

    cout << "Arreglo ordenado: ";
    for (int i = 1; i <= n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

void ShellSort(int A[], int n) {
    int k = n + 1;
    int aux;
    int j;

    while (k > 1) {
        k = k / 2;
        for (int i = k + 1; i <= n; i++) {
            aux = A[i];
            j = i;
            while (j - k >= 1 && A[j - k] > aux) {
                A[j] = A[j - k];
                j = j - k;
            }
            A[j] = aux;
        }
    }
}