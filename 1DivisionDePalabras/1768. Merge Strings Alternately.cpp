//el problema pide que se devuelva un string
#include <bits/stdc++.h> 
using namespace std;

int main(){
	string word1,word2;
	//vector <> juntos;
	string juntos = "";
	cin>>word1>>word2;
	//char pal1[100],pal2[100];
	
	for(int i=0;i<(word1.size()+word2.size());i++){
		if(i<word1.size()){
			juntos.push_back(word1[i]);
		}
		if(i<word2.size()){
			juntos.push_back(word2[i]);
		}
		
	}
	for(int i=0;i<juntos.size();i++){
		cout<<juntos[i];
	}
	
	
	return 0; //en ves de devolver 0 devuelve juntos
}