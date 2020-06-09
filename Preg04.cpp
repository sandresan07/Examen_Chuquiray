#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
	int n,i,s=0;
	cout<<"ingrese el numero: ";
	cin>>n;
	for(i=1;i<n;i++){
		if(n%i==0)
		s=s+i;
		
	}
	if(s==n){
		cout<<"es perfecto";
	}
	else{
		cout<<"no es perfecto";
	}
	
	
}
