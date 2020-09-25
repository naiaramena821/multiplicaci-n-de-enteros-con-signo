#include <iostream>
#include <vector> 
using namespace std;


int main()
{
    int Q;//Multiplicador,con este indicamos la cant de bits
    int M;//Multiplicando

    cout << "Multiplicador: ";
    cin >> Q;
    cout << "Multiplicando: ";
    cin >> M;

    vector<int>arr1;//arreglo que puede cambiar de tamaño
    vector<int>arraux;
    vector<int>arr2;

    while (Q != 0) {
        while (Q > 0) {
            arr1.push_back(Q % 2);//el comando push_back permite agregar un nuevo elemento al final del vector
            Q /= 2;
            arraux.push_back(0);// Palabra binaria auxiliar de la misma cant de bit que Q
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
    for (int i = (arr1.size() - 1); i >= 0; i--) {//se imprimen de forma invertida con la misma cant de bits que Q
        cout << arr2[i];
    }

    cout << endl;

    cout << "Auxiliar: ";
    for (int i = (arr1.size() - 1); i >= 0; i--) {//se imprimen de forma invertida con la misma cant de bits que Q
        cout << arraux[i];
    }

    cout << endl;
    cout << endl;

    int tam1 = size(arr1);

        for (int i = 0; i < tam1; i++) {

            if (arr1[0] == 1 && arr1[tam1 - 1] == 0) {//si el Q0=1 y Qn-1=0 
                arraux[i] -= arr2[i];//A-M
                cout << arraux[i];
            }

            else if (arr1[0] == 0 && arr1[tam1 - 1] == 1) {//si el Q0=0 y Qn-1=1
                arraux[i] += arr2[i];//A+M
                cout << arraux[i];
            }
            else {
                cout << arr2[i];
            }
        }

}

