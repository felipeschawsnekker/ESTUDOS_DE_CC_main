#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    double x;
    double maior;
    double aux[4];
    cout<<"Digite um valor: " << endl;
    cin>>x;
    maior = x;
    
    
    for(int i=0; i<3; i++){
        cout<<"Digite um numero: " << endl;
        cin>>aux[i];
        if(aux[i] > maior){
            maior = aux[i];
        }
        
    }
    cout<< maior;
    
    
    
}
