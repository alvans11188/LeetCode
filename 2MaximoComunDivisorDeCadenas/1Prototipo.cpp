#include <bits/stdc++.h>

using namespace std;

int main(){
	int cen=0;
	string palabra1,palabra2,palabra3,palabra4;
	cin>>palabra1>>palabra2;
	string mayor,menor;
	mayor=palabra1;
	if(palabra2.size()>mayor.size()){
		mayor=palabra2;
	}
	if(mayor==palabra2){
		menor=palabra1;
	}else{
		menor=palabra2;
	}
	int i=0,cen2=0;
	/*
	for(int n=0;n<menor.size();n++){
		for(int m=0;m<mayor.size();m++){
			if(menor[n]!=mayor[m]){
				cen2=1;
			}
		}
	}
	*/
	bool valor;
	/*
	for(int n=0;n<menor.size();n++){
		valor=(find(mayor.begin(),mayor.end(),menor[n])!=mayor.end());
		if(!valor){
			cen=1;
		}
	}
	*/
	for(int n=0;n<mayor.size();n++){
		valor=(find(menor.begin(),menor.end(),mayor[n])!=menor.end());
		if(!valor){
			cen=1;
		}
	}
	if(cen==0)	{
	
		while((i!=mayor.size()&&(cen==0))){
			if(mayor[i]==menor[i]){
				palabra3.push_back(mayor[i]);
				for(int j=0;j<palabra3.size();j++){
					if(palabra3[j]==mayor[i+1]){
						cen=1;
					}
				}
			}
			i++;
		}
		cout<<palabra3<<endl;
	}else{
		cout<<"''"<<endl;
	}
	return 0;
}