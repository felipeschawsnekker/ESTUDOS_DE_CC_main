/* NÍVEL MÉDIO – Matriz (arrays 2D)
7. Percorra uma matriz usando ponteiros (sem [][]).
Dado:
int M[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
Imprima todos os elementos usando apenas:
*(M[i] + j)*/

#include <iostream>
using namespace std;

int main(){
    int M[3][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                            };
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<*(M[i] + j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //ou
    int *p=&M[0][0];
    for(int i=0; i<9; i++){
        cout<<*(p+i)<<" ";
        if((i+1)%3==0){
            cout<<endl;
        }
    }

    //ou
    cout<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<*(*(M+i) + j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
