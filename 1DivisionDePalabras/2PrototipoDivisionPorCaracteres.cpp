/*
Division de una oracion mediante un caracter especial dentro de la misma
ejemplo:
Hola,como,estas
dividido la palabra por medio de la ','
*/
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main(){
	string palabra;
	string pal;
	cin>>palabra;
	stringstream ss(palabra);
	char delimitador=','; //es posible cambiar esto para determinar el caos enq ue se partira
	vector<string> resultado;
	
	while(getline(ss,pal,delimitador)){
		resultado.push_back(pal);
	}
	
	for(int i=0;i<resultado.size();i++){
		cout<<resultado[i]<<endl;
	}
	
	return 0;
}