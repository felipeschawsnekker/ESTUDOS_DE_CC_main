//Struct Conta com nome do cliente, saldo e número da conta. Crie funções para depositar e sacar.

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;



struct Cliente{
    string nome;
    double saldo;
    int numero;
};
Cliente cliente;

double Depositar(double deposito){
    return cliente.saldo+=deposito;
}

double Sacar(double saque){
    return cliente.saldo-=saque;
}

void Saldo(){
    cout<<"Saldo Atual: R$"<<cliente.saldo;
}

void Continuar(){
cout<<"\nDigite um valor dentre as opções a seguir: \n (1)-SAQUE \n (2)-DEPOSITO \n (3)-SAIR"<<endl;
    }

int main(){
    
    cout<<"\n =====================BANCO====================== \n";
    cout<<"Digite seu nome: "; getline(cin,cliente.nome);
    cout<<"Digite seu saldo: "; cin>>cliente.saldo;
    cout<<"Digite o número de sua conta: "; cin>>cliente.numero;
    while(true){
    int i;
    Continuar();
    cin>>i;
    double saque,deposito;
    cout<<endl;
    
    if(i==1){
    
        cout<<"DIGITE O VALOR A SER SACADO: ";
        cin>>saque;
        Sacar(saque);
        Saldo();
        
        
    }
    else if(i==2){
        cout<<"DIGITE O VALOR A SER DEPOSITADO: ";
        cin>>deposito;
        Depositar(deposito);
        Saldo();
        }
    else if(i==3){
        cout<<"SAINDO......";
        break;
        return 0;
    }
    }
}
