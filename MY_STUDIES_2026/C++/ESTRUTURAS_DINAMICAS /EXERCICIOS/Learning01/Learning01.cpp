/* ível Iniciante (conceitos básicos)
Alocação de um único inteiro
Objetivo: alocar um inteiro dinamicamente, atribuir valor e imprimir.
Dicas: usar malloc, acessar com *p, liberar com free.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    cout<<"Digite o número de elementos: ";
    cin>>n;
    int *ptr = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        cout<<"["<<i+1<<"]: ";
        cin>>ptr[i];
    }
    
    for(int i=0; i<n; i++){
        cout<<"Valor ["<<i+1<<"]: "<<ptr[i]<<endl;
    }
    free(ptr);
    return 0;
}
