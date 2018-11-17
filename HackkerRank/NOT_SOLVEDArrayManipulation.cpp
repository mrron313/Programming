#include<bits/stdc++.h>

using namespace std;

int arr[10000000]={0};

int main(){
	
	int n, m, a, b, c ;
	int sum=0;
	
	cin >> n >> m;
	
	while(m>0){
		cin>> a >> b >> c;
		for(int k=a;k<=b;k++){
			arr[k]+=c;
			if(arr[k]>sum)
				sum=arr[k];
		}
		m--;
	}
	
	cout << sum;
	return 0;
}
