/*Escreva um programa para somar todos os elementos de uma fila e imprimir a soma e a média dos elementos.
*/

#include <queue>
#include <iostream>
using namespace std;

int main(){
    queue <int> f1,f2;
    
    f1.push(1);
    f1.push(2);
    f1.push(3);
   
    int n=f1.size();
    int soma=0;
    
    
    for(int i=0; i<n; i++){
        f2.push(f1.front());
        soma+=f1.front();
        f1.pop();
    }
    
    cout<<"LISTA 2: ";
    for(int i=0; i<n; i++){
        cout<<f2.front()<<" ";
        f2.pop();
    }
    cout<<"\nSOMA DOS ELEMENTOS: "<<soma<<endl;
    cout<<"MEDIA: "<<double(soma/n)<<endl;
    cout<<endl;
}
