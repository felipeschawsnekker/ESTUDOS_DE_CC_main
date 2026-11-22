/* Faça um programa que cadastre
as notas de uma classe. A entrada será 
finalizada com a digitação de uma nota 
menor que 0. As notas devem ser armazenados em uma
pilha. A saída do programa deve apresentar as notas e a 
média. Caso a pilha seja vazia, deve-se mostrar a mensagem. 
*/
#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct NO{
    int dado;
    NO* prox;
}NO;

typedef struct Pilha{
    NO *topo;
}Pilha;

void Inicializar(Pilha *p){
    p->topo=NULL;
}

void Empilhar(Pilha *p, int valor){
    NO *ptr = (NO*)malloc(sizeof(NO));
    if(ptr==NULL){
        cout<<"Erro!"<<endl;
        return;
    }
    ptr->dado=valor;
    ptr->prox=p->topo;
    p->topo=ptr;
    
}

void Exibir(Pilha *p){
    double media=0;
    int cont=0;
    NO *ptr=p->topo;
    if(ptr==NULL){
        cout<<"Erro!"<<endl;
        return;
    }
    while(ptr!=NULL){
        cout<<ptr->dado<<" ";
        media+=ptr->dado;
        cont++;
        ptr=ptr->prox;
    }
    if(cont!=0){
    cout<<"\n Média: "<<media/cont;
    cout<<endl;
    }
}

int main(){
    Pilha p;
    Inicializar(&p);
    int num;
    while(true){
    cout<<"Digite notas diferente maiores que 0(Se for 0 o programa fechará e exibirá as notas): ";
    cin>>num;
    if(num!=0 && num>0){
    Empilhar(&p,num);
    }
    else if(num<0){
        cout<<"\n=========EXIBINDO NOTAS=========\n";
        Exibir(&p);
        break;
    }
    else{
        cout<<"Digite valores válidos"<<endl;

    }
}
return 0;
}
