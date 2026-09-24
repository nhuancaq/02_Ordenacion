//metodo
#include <iostream>
using namespace std;

void QuickSort(int A[], int n);
void Reduce(int A[], int inicio, int final);

int main() {
    int n = 6;
    int A[7] = {0, 5, 2, 9, 1, 7, 3};

    QuickSort(A, n);

    cout << "Arreglo ordenado: ";
    for (int i = 1; i <= n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

void QuickSort(int A[], int n) {
    Reduce(A, 1, n);
}

void Reduce(int A[], int inicio, int final) {
    int izq = inicio;
    int der = final;
    int pos = izq;
    int cen = 1;
    int aux;

    while (cen == 1) {
        cen = 0;

        while (A[pos] <= A[der] && pos != der) {
            der = der - 1;
        }

        if (pos != der) {
            aux = A[pos];
            A[pos] = A[der];
            A[der] = aux;
            pos = der;

            while (A[pos] >= A[izq] && pos != izq) {
                izq = izq + 1;
            }

            if (pos != izq) {
                aux = A[pos];
                A[pos] = A[izq];
                A[izq] = aux;
                pos = izq;
                cen = 1;
            }
        }

        if (pos - 1 > inicio) {
            Reduce(A, inicio, pos - 1);
        }

        if (pos + 1 < final) {
            Reduce(A, pos + 1, final);
        }
    }
}