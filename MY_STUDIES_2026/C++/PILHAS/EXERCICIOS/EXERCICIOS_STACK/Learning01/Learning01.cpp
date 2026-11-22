/* Usando uma pilha S1 de números inteiros, inverta a ordem de seus elementos em uma pilha S2. 
*/

#include <stack>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int tam_pilha=10;

void add(stack<int> &s1){
    for(int i=0; i<tam_pilha;i++){
        int temp=(rand()%50)+1;
        s1.push(temp);
    }
}

void show(stack<int> s1){
    if(s1.empty()==true){
        cout<<"Pilha vazia"<<endl;
        return;
    }
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
}
    cout<<endl;
}

void inverter(stack<int> &s1, stack<int> &s2){
    while(!s1.empty()){
    s2.push(s1.top());
    s1.pop();
}
}
int main(){

    stack<int> S1,S2;
    srand(time(0));
    add(S1);
    cout<<"\nPilha S1\n";
    show(S1);
    inverter(S1,S2);
    cout<<"\nPilha S2\n";
    show(S2);


    
}
