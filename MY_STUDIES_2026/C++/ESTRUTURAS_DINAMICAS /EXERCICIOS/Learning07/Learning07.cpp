/* Realloc para expandir array

Inicialmente alocar um array de tamanho 5.
Pedir para o usuário adicionar mais 3 elementos.
Usar realloc e imprimir o array atualizado.*
*/
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
void PreencherArray(int *ptr, int tamanho){
    for(int i=0; i<tamanho; i++){ 
        int num=(rand()%100)+1;
        ptr[i]=num;
    }
}

int* ReallocarArray(int *ptr, int tamanho, int adicionar){
    int novoTamanho = tamanho + adicionar;
    int *temp = (int*) realloc(ptr, novoTamanho * sizeof(int));
    if(temp == NULL){
        cout << "Erro ao realocar memória!" << endl;
        return NULL;
    }

    cout << "Digite " << adicionar << " novos valores:\n";
    for(int i = tamanho; i < novoTamanho; i++){
        cin >> temp[i];
    }

    return temp;
}

void ExibirArray(int *ptr,int tamanho){
    for(int i=0; i<tamanho; i++){
        cout<<"Elemento ["<<i+1<<"]: "<<ptr[i]<<endl;
    }
}

int main(){
    srand(time(0));
    int x=5;
    int *ptr=(int*)malloc(x*sizeof(int));

    PreencherArray(ptr,5);
    cout<<"\nAntigo Array\n";
    ExibirArray(ptr,5);

    ptr=ReallocarArray(ptr,5,3);
    cout<<"\nNovo Array\n";
    ExibirArray(ptr,8);

    free(ptr);
    return 0;
}


