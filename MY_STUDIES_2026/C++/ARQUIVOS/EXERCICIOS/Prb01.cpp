#include <iostream>
using namespace std;
#include <cstdio>

int main(){
    FILE *arquivo=fopen("Arq01.bin","w");
    if (arquivo != nullptr){
        fprintf(arquivo, "Banana");
        fclose(arquivo);
        cout <<"Arquivo criado com sucesso"<<endl;
    } 
    else {
        cout<< "Erro ao criar o arquivo."<<endl;
    }
}
