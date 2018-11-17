#include<iostream>

using namespace std;

int main(){
	
	string str ;
	
	str = "I am a good boy hj";
	
	int lastspace;
	
	int l = str.length();
	
	if(l<=16){
		cout << str;
	}
	else{
		
		if(str[16]==' '){
			for(int i=0;i<16;i++)
				cout << str[i];
			cout << endl;
			for(int i=17;i<l;i++)
				cout << str[i];
		}
		
		else if(str[16]!=' '){
			
			for(int i=0;i<16;i++){
				if(str[i]==' '){
					lastspace=i;
				}	
			}	
			for(int i=0;i<lastspace;i++)
				cout << str[i];
				
			cout << endl;
			
			for(int i=lastspace+1;i<l;i++)
				cout << str[i];
		}
	}
	
	return 0;
}
