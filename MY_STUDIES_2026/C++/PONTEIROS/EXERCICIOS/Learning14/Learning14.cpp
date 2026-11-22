/* /*03) Rev03- Faça um programa para imprimir os valores armazenados em uma Matriz
      de ordem 3 X  4 de números inteiros  e imprimir os endereços destes elementos
	  na memória, usar ponteiro.
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int i = 3;
const int j = 4;
int matriz[i][j];

void CriarMatriz(){
    int *ptr = &matriz[0][0];
    cout << "Digite os valores para a matriz: " << endl;
        for(int a=0; a<12; a++){
            int x;
            cout<<"Elemento "<<a+1<<": ";
            cin>>x;
            *(ptr+a)=x;
        }
}

void ExibirMatriz(){
    int *ptr = &matriz[0][0];
    int counter=0;
    cout << "\nMatriz com valores:\n";
        for(int a=0; a<12; a++){
            cout<<setw(3)<<*(ptr+a)<<" ";
            counter=counter+1;
            if(counter==4){
                cout<<endl;
                counter=0;
            }
        }
        cout<<endl;

        cout << "\nMatriz com enderecos:\n";
        int counter2=0;
        for(int a=0; a<12; a++){
            cout<<setw(3)<<(ptr+a)<<" ";
            counter2=counter2+1;
            if(counter2==4){
                cout<<endl;
                counter2=0;
            }
        }
        cout<<endl;
    }


int main(){
    CriarMatriz();
    ExibirMatriz();
    return 0;
}
