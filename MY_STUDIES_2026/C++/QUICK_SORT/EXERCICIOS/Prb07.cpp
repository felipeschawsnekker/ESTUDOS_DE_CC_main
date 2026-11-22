#include <iostream>
using namespace std;

void quickSort(int v[], int inicio, int fim){
    if(inicio >= fim){
        return;
    }

    int pivo = v[(inicio + fim) / 2];
    int i = inicio;
    int j = fim;

    while(i <= j){

        while(v[i] < pivo){
            i++;
        }

        while(v[j] > pivo){
            j--;
        }

        if(i <= j){
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }

    if(inicio < j){
        quickSort(v, inicio, j);
    }

    if(i < fim){
        quickSort(v, i, fim);
    }
}

int main(){
    int v[] = {8, 2, 7, 3, 5, 1, 6, 4};
    int tamanho = 8;

    quickSort(v, 0, tamanho - 1);

    for(int i = 0; i < tamanho; i++){
        cout << v[i] << " ";
    }

    return 0;
}
