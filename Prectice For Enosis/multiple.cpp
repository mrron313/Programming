#include<iostream>

using namespace std;

int main(){
	
	int n=200, k;
	
	for(int i=3;i<=200;i++){
		if(i%3==0){
			k = i;
			while(k!=0){
				cout << k%10;
				k=k/10;
			}
			cout << " ";
		}
	}
	return 0;
}
