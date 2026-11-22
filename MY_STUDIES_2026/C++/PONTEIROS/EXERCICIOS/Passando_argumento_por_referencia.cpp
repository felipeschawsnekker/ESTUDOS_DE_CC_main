#include <iostream>
using namespace std;

void Aumenta (float &preco, float &aumento); //O protótipo de função é necessário 
//apenas quando sua definição ocorre após o ponto onde ela é utilizada (redundante neste caso)

int main(){
    float Vpreco, Vaumento;
    cout<<"Insira o preço da mercadoria: "; cin>>Vpreco;
    Aumenta(Vpreco,Vaumento); //recebe por referência
    cout<<"Preço novo: "<<Vpreco<<endl<<"Aumento: "<<Vaumento<<endl;
}

void Aumenta(float &preco, float &aumento){
    aumento=preco*0.2;
    preco*=1.20;
    
}
