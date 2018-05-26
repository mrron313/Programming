#include<iostream>
#include<string>

using namespace std;

string reverse(string s){
	
	int l = s.size(), i;
	string str2; int j=0;
	
	//cout << s.size() << " " << s.length();
	for(i=l-1;i>=0;i--){
		str2+=(char)s[i];
	}
			
	//cout << str2;
	return str2;
}

int main(){
	
	string str = "A man\na plan\na canal: Panama";
	
	reverse(str);
	
	return 0;
}

