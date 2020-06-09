#include<iostream>
using namespace std;
int main(){
	int num,aux,resto,numinv=0;
	cout<<"ingrese el numero"<<endl;
	cin>>num;
	aux=num;
	while(aux>0){
		resto=aux%10;
		aux=aux/10;
		numinv=numinv*10+resto;
		
	}
	if(numinv==num){
		cout<<"el numero es capicua";
	}
	else{
		cout<<"el numero no es capicua";
	}
}
