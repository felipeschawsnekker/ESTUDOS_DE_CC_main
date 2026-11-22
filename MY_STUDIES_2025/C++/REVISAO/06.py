#include <iostream>
using namespace std;

int main(){
	
	
	string mesnome[12]={"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
	string diames[12]={"31", "28", "31", "30", "31", "30", "31", "31", "30", "31", "30", "31"};
	
	int mes;
	cout<<"Digite o número do mês: ";
	cin>>mes;
	
	cout<<"Digite o ano: ";
	int ano;
	cin>>ano;
	
	cout<<"O seu mês é: "<<mesnome[mes-1]<<endl;
	
	
	if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){

		cout<<"O ano é bissexto. "<<endl;
		if(mes!=2){
		cout<<"O número de dias do mês: "<<diames[mes-1]<<endl;
	}
		else{
			cout<<"O número de dias do mês é: 29"<<endl;
		}
	}
	
	else{
		cout<<"O número de dias do mês: "<<diames[mes-1]<<endl;
	}
	
}
