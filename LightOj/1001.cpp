#include<iostream>

using namespace std;

int main(){
	
	int t;
	int n;
	int a;
	
	cin>>t;
	
	while(t>0){
		a=0;
		cin >> n;
		
		if(n>10){
			a = n-10; 
			n = n - a;
		}
		
		cout << a << " " << n << endl;

		t--;
	}
	
	return 0;
}
