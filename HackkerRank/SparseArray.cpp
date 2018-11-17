#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n, arr[1000];
	
	vector<string> input;
	string q;
	
	cin >> n;
	
	while(n>0){
		cin >> q;
		input.push_back(q);
		n--;
	}
	
	cin >> n;
	
	int c, k=0;
	
	while(k<n){
		cin >> q;
		c=0;
		for(int i=0; i<input.size(); i++){
			if(q==input[i]) c++;
		}
		arr[k]=c;
		k++;
	}
	
	for(int i=0;i<k;i++)
		cout << arr[i] << endl;
	
	return 0;
}
