/*Usando uma fila F1 de números inteiros, inverta a ordem de seus elementos em uma fila F2*/
#include <queue>
#include <iostream>
using namespace std;

int main(){
    queue <int> F1,F2;
    F1.push(1);
    F1.push(2);
    F1.push(3);
    int n=F1.size();
    while(n>0){
        for(int i=1; i<n; i++){
            F1.push(F1.front());
            F1.pop();
        }
        F2.push(F1.front());
        F1.pop();
        n--;
    }
     while(!F2.empty()){
        cout << F2.front() << " ";
        F2.pop();
    }
    
}
