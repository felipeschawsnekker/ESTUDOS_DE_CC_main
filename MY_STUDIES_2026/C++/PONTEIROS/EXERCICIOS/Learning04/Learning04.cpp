/* Array + ponteiros
Dado:
int v[5] = {10, 20, 30, 40, 50};
Use SOMENTE ponteiros (sem v[i]) para imprimir todos os elementos do array.*/

#include <iostream>
using namespace std;

int main(){
    int v[5] = {10, 20, 30, 40, 50};

    for(int i=0; i<5; i++){
        cout<<*(v+i);
        if(i!=4){
            cout<<" ; ";
        }
    }
    cout<<endl;
}
