class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    int cen=0;
	//string str1,str2,
    string palabra3,palabra4;
	//cin>>str1>>str2;
	string mayor,menor;
	mayor=str1;
	if(str2.size()>mayor.size()){
		mayor=str2;
	}
	if(mayor==str2){
		menor=str1;
	}else{
		menor=str2;
	}
	int i=0,cen2=0;
	
	bool valor;
	
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
		return palabra3;
	}else{
		return "";
	}
    
};