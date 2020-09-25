#include <iostream>
#include <vector> 
using namespace std;


int main()
{
    int Q;
    int M;

    cout << "Multiplicador: ";
    cin >> Q;
    cout << "Multiplicando: ";
    cin >> M;

    vector<int>arr1;//arreglo que puede cambiar de tamaño
    vector<int>arraux;
    vector<int>arr2;

    while (Q != 0) {
        while (Q > 0) {
            arr1.push_back(Q % 2);//permite agregar un nuevo elemento al final del vector
            Q /= 2;
            arraux.push_back(0);
            arr2.push_back(M % 2);
            M /= 2;
        }
    }

    cout << endl;

    cout << "Multiplicador: ";
    for (int i = (arr1.size() - 1); i >= 0; i--) {
        cout << arr1[i];
    }

    cout << endl;

    cout << "Multiplicando: ";
    for (int i = (arr1.size() - 1); i >= 0; i--) {//se imprimen de forma invertida
        cout << arr2[i];
    }

    cout << endl;

    cout << "Auxiliar: ";
    for (int i = (arr1.size() - 1); i >= 0; i--) {
        cout << arraux[i];
    }

    cout << endl;
    cout << endl;

    int tam1 = size(arr1);
    int tam2 = size(arr2);

        for (int i = 0; i < tam1; i++) {

            if (arr1[0] == 1 && arr1[tam1 - 1] == 0) {
                arraux[i] -= arr2[i];
                cout << arraux[i];
            }

            else if (arr1[0] == 0 && arr1[tam1 - 1] == 1) {
                arraux[i] += arr2[i];
                cout << arraux[i];
            }
            else {
                cout << arr2[i];
            }
        }

}

