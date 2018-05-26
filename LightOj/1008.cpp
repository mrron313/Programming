#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	long long t, n, k, row, col, middle, index=1;
	
	cin >> t;
	
	while(index<=t){
		cin >> n;
		
		k = ceil(sqrt(n));
		
		middle = pow(k,2)-k+1 ;
		if(n>middle && k%2==0){
			col = k;
			row = k-(n-middle);
		}
		else if(n>middle && k%2==1) {
			row=k;
			col = k-(n-middle);
		}
		else if(n<middle && k%2==0) {
			row=k;
			col = k-(middle-n);
		}
		else if(n<middle && k%2==1) {
			col=k;
			row = k-(middle-n);
		}
		else if(middle==n){
			row=col=k;
		}
		
		cout << "Case " << index << ": " << col << " " << row << endl ;
		index++;
	}
	
	return 0 ;
}
