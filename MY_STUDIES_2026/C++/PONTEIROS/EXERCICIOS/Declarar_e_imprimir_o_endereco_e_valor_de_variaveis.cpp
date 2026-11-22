#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int *ponteiro; //declaracao de uma variável do tipo ponteiro
    a=1,b=2,c=3;
    ponteiro = &a;
    cout<<"Endereço guardado no ponteiro: "<<ponteiro
        <<", o valor apontado pelo ponteiro "
        <<*ponteiro<<endl;
        
    cout<<"O conteúdo de B é: "<<b
        <<", o endereço de B é: "<<&b
        <<endl
        <<"O conteúdo de C é: "<<c
        <<", o endereço de C é: "<<&c
        <<endl;
    
    return 0;
}
