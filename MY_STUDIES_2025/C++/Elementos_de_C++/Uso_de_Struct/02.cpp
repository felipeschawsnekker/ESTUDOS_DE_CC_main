//Struct Produto com nome, preço e quantidade. Calcule o valor total do estoque.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Produto{
    string nome;
    double preco;
    int quantidade;
};

int main(){
    int x;
    cout<<"Digite quantos produtos você deseja adicionar: "; cin>>x;
    
    Produto produtos[x];
    
    for(int i=0; i<x; i++){
        cout<<"\nNOME DO PRODUTO: "; 
        cin>>produtos[i].nome;
        
        cout<<"PREÇO DO PRODUTO: R$"; 
        cin>>produtos[i].preco;
        
        cout<<"QUANTIDADE DO PRODUTO: "; 
        cin>>produtos[i].quantidade;
        
        cout<<"\n===============================\n";
        }
    
    double valor=0;
    for(int i=0; i<x;i++){
        valor+=produtos[i].preco*produtos[i].quantidade;
    }
    cout<<fixed<<setprecision(2)<<"VALOR TOTAL DO ESTOQUE: "<<valor;
}
