#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string abr = "civvic";

	int i, l, j, flag=0, n;
	
	l = abr.length();
	n = (l/2)-1;
	
	for(i=0,j=l-1;i<=n;i++,j--){
		if(abr[i]!=abr[j]){
			flag=1;
		}
	}
	if(flag==1){
		cout << "N" << endl;
	}else{
		cout << "P" << endl;
	}
}
