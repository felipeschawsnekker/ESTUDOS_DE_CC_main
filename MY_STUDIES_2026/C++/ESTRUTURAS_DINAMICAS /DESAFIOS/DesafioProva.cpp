#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct tam {
    int x; 
    int y;
};

void multiplicaMatriz(float *A, tam Ta, float *B, tam Tb, float *C){
    for(int i=0; i<Ta.x; i++){
        for(int j=0; j<Tb.y; j++){
            C[i*Tb.y+j]=0;
            for(int k=0; k<Ta.y; k++){
                C[i*Tb.y+j] += A[i*Ta.y+k] * B[k*Tb.y+j];
            }
        }
    }
}

void mostrarMatriz(float *p, tam T){
    for(int i=0; i<T.x; i++){
        cout << "[ ";
        for(int j=0; j<T.y; j++){
            cout << p[i*T.y+j] << " ";
        }
        cout << "]" << endl;
    }
}

void preencherMatriz(float *p, tam T){
    for(int i=0; i<T.x; i++){
        for(int j=0; j<T.y; j++){
            p[i*T.y+j] = rand()%100 + 1;
        }
    }
}

int main(){
    srand(time(0));

    int a[2], b[2];

    cout << "Digite linhas e colunas da matriz A: ";
    cin >> a[0] >> a[1];
    tam A = {a[0], a[1]};

    cout << "Digite linhas e colunas da matriz B: ";
    cin >> b[0] >> b[1];
    tam B = {b[0], b[1]};

    if(A.y != B.x){
        cout << "Tamanho inválido para multiplicação!" << endl;
        return 0;
    }

    tam C = {A.x, B.y};

    float matrizA[A.x][A.y];
    float matrizB[B.x][B.y];
    float matrizC[C.x][C.y];

    float *pA = &matrizA[0][0];
    float *pB = &matrizB[0][0];
    float *pC = &matrizC[0][0];

    preencherMatriz(pA, A);
    preencherMatriz(pB, B);

    cout << "\nMatriz A:\n";
    mostrarMatriz(pA, A);

    cout << "\nMatriz B:\n";
    mostrarMatriz(pB, B);

    multiplicaMatriz(pA, A, pB, B, pC);

    cout << "\nMatriz Resultante (A x B):\n";
    mostrarMatriz(pC, C);

    return 0;
}
