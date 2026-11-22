/* Imprima os endereços dos elementos da matriz
Mostre:
endereço de M
endereço de M[i] (cada linha)
endereço de cada elemento usando *(M + i) + j
Observe os saltos na memória.*/

#include <iostream>
using namespace std;

int M[2][2]={1,2,
             3,4};

int main(){
    cout<<"Endereço de M: "<<M<<endl;
    cout<<"Endereço de cada linha M[i]: "<<M[0]<<" "<<M[1]<<endl;
    cout<<"Endereço de cada elemento: "<<endl;
    for(int i=0; i<2; i++){
        cout<<"[ ";
        for(int j=0; j<2; j++){
            cout<<(*(M+i)+j)<<" ";
           
        }
        cout<<" ]";
        cout<<endl;
    }
    return 0;
}
