#include <iostream>
using namespace std;
#include <cstdio>

int main(){
    
    FILE *arq=fopen("felipe.txt","r");
    
    if (arq==NULL){
        cout<<"Erro ao criar ao arquivo"<<endl;
    }
    else{
        cout<<"Arquivo criado com sucesso"<<endl;
    }
    
    putc('A',arq);
}
