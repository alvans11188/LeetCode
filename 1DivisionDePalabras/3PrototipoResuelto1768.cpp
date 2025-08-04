#include <bits/stdc++.h> 
using namespace std;

int main(){
	string palabra1,palabra2;
	vector <char> juntos;
	cin>>palabra1>>palabra2;
	char pal1[100],pal2[100];
	
	for(int i=0;i<(palabra1.size()+palabra2.size());i++){
		if(i<palabra1.size()){
			juntos.push_back(palabra1[i]);
		}
		if(i<palabra2.size()){
			juntos.push_back(palabra2[i]);
		}
		
	}
	for(int i=0;i<juntos.size();i++){
		cout<<juntos[i];
	}
	
	
	return 0;
}