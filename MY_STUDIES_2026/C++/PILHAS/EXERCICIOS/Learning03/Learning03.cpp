/* Inverta um array usando uma pilha
Dado um array de 10 inteiros, use uma pilha para deixar o array ao contrário.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
struct Pilha{
    int topo;
    int dados[10];
};

void init(Pilha &p){
    p.topo=-1;
}
void push(Pilha &p, int x){
    if(p.topo==9){
        cout<<"Pilha cheia"<<endl;
        return;
    }
    p.dados[++p.topo]=x;
}

void show(Pilha &p){
    if(p.topo==-1){
        cout<<"Pilha vazia"<<endl;
        return;
    }
    for(int i=p.topo; i>=0; i--){
        cout<<p.dados[i]<<" ";
    }
    cout<<endl;
}

void showarray(int *ptr,int x){
    if(ptr==nullptr){
        cout<<"Ponteiro nulo"<<endl;
        return;
    }
    for(int i=0; i<x; i++){
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
}

int pop(Pilha &p){
    if(p.topo==-1){
        cout<<"Pilha vazia"<<endl;
        return -1;
    }
    return p.dados[p.topo--];
}



int main(){
    int arr[10];
    int *ptr=arr;
    srand(time(0));
    for(int i=0; i<10; i++){
        int num=(rand()%50)+1;
        *(ptr+i)=num;
    }
    cout<<"Array Original: ";
    showarray(ptr,10);
    Pilha p;
    init(p);

    for(int i=0; i<10; i++){
        push(p,*(ptr+i));
    }

    for(int i=0; i<10; i++){
        *(ptr+i)=pop(p);
    }
    cout<<"Array Invertido: ";
    showarray(ptr,10);
    cout<<endl;
    return 0;

}
