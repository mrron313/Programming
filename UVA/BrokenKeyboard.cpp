#include<bits/stdc++.h>

using namespace std;

int main(){
	
	vector<char> str;
	vector<char>::iterator it;
	string input;
	
	while(getline(cin,input)){
		it = str.begin();
		
		for(int i=0;i<input.size();i++){
			if(input[i]=='['){
				it = str.end();
			}else if(input[i]==']'){
				it = str.begin();	
			}else{
				it = str.insert(it,input[i]);
			}
		}
		reverse(str.begin(),str.end());
		for(int i=0;i<str.size();i++)
			cout << str[i];
		cout << endl;
		str.clear();
	}
	

	
	return 0;
}
