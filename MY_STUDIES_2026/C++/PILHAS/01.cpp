#include <stack>
#include <iostream>
using namespace std;

int main(){
    
    stack<float> pilha;
    int n;
    
    
    cout<<"Quantos elementos deseja ter na sua pilha? ";
    cin>>n;
    float x;
    for(int i=0; i<n; i++){
        cout<<"Numero "<<i+1<<": ";
        cin>>x;
        pilha.push(x);
    }
    
    float maior=pilha.top();
    float menor=pilha.top();
    
    while(!pilha.empty()){
        
        if(pilha.top()>maior){
            maior=pilha.top();
        }
        if(pilha.top()<menor){
            menor=pilha.top();
        }
        pilha.pop();
    }
    
    cout<<"Maior valor da Pilha: "<<maior<<endl;
    cout<<"Menor valor da Pilha: "<<menor<<endl;
}
