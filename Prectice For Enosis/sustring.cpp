#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string abr = "I am Arif";
	int c=0, m;
	
	for(int i=abr.length()-1;i>=0;i--){
		c++;
		if(abr[i]==' '){
			m=i;
			for(int j=i+1;j<i+c;j++)
				cout << abr[j];
			cout << " ";
			c=0;
		}
	}
	
	for(int i=0;i<m;i++){
		cout << abr[i];
	}

}
