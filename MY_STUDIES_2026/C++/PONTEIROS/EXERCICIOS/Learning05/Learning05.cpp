/* 5. Aritmética de ponteiros
Dado:
int v[4] = {4, 8, 12, 16};
int *p = v;
Escreva expressões usando ponteiros que retornem:
o primeiro elemento
o terceiro elemento
o último elemento
a soma dos elementos usando *(p + i) */

#include <iostream>
using namespace std;

int main(){
    int v[4] = {4, 8, 12, 16};
    int *p=v;
    int soma=0;
    cout<<"\n ====Exibição total====\n ";
    for(int i=0; i<4; i++){
        cout<<*(p+i)<<" ";
        soma+=*(p+i);
        if(i!=3){
            cout<<" | ";
        }
    }
    cout<<"\nPrimeiro elemento: "<<*(v+0);
    cout<<"\nTerceiro elemento: "<<*(v+2);
    cout<<"\nUltimo elemento: "<<*(v+3)<<endl;
    return 0;
}
