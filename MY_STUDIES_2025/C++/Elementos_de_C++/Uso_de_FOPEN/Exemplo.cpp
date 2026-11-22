#include <iostream>
using namespace std;
#include <cstdio>

int main(){
    
    FILE* arq= fopen("felipe.txt","r");
    if (arq==NULL){
        cout<<"Arquivo não encontrado";
        return 1;
    }
    
    fclose(arq);

}
