#include<iostream>

using namespace std;

int main(){
	long n, s, a, j, arr[100000];
	
	cin >> n >> s;
	
	for(int i=0; i<n; i++){
		cin >> a;
		if(i-s<0){
			j = n-(s-(i-0));
		}else{
			j = i-s;
		}
		arr[j]=a;
	}
	
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
