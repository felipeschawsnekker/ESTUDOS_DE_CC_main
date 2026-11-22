#include <iostream>
using namespace std;

void Aumenta(float &preco, float &porc);

int main(){
	float Vpreco,Vporc;
	cout<<"Preço da mercadoria: "; cin>>Vpreco;
	Aumenta(Vpreco,Vporc);
	cout<<"Preco novo: "<<Vpreco<<". Aumento: "<<Vporc<<endl;
}

void(Aumenta(float &preco, float&porc)){
	porc=preco*0.20;
	preco = preco*1.20;
}
