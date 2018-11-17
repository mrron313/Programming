#include<iostream>

using namespace std;

int main(){
	int n = 7 ;
	
	for(int i=1; i<=n; i+=2){
		for(int j=1; j<=n-i; j+=2)
			cout<< " " ;
		for(int j=1;j<=i;j++)
			cout << "*" ;
		cout << endl;
	}
	
	for(int i=n-1; i>=1; i-=2){
		for(int j=1;j<=n-i;j+=2)
			cout << " " ;
		for(int j=1;j<=i-1;j++)
			cout << "*";
		cout << endl;
	}
	
	return 0;
}
