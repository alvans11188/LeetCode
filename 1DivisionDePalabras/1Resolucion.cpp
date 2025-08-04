/*
Divide una palabra en diferentes caracteres e imprimelos  con 
un salto de linea entre ellos
ENTRADA:
vaca
SALIDA:
v
a
c
a
*/
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main(){
	
	string palabra;
	cin>>palabra;
	
	for(int i=0;i<palabra.length();i++){
		cout<<palabra[i]<<endl;
	}
	
	return 0;
}