#include <bits/stdc++.h>

using namespace std;

long max(long long c,long long b){
	if(c>=b)
		return c;
	else
		return b;	
}

int main(){
	
	int t, n, i, maxValue, j, k;
	long long a[200][210], d[200][210];
	cin>>t;
	
	for(int p=1; p<=t ; p++){
		cin >> n;
		for(i=0;i<2*n-1;i++){
			if(i<n)
				for(int j=1;j<=i+1;j++){
					cin>>a[i][j];
				}
			else{
				for(int j=1;j<2*n-i;j++){
					cin>>a[i][j];
				}
			}
		}
		d[0][1] = a[0][1];
		//cout<< d[0][0]<< endl;
		maxValue=d[0][1];
		for(i=1;i<2*n-1;i++){
			if(i<n){
					
				for(j=1;j<=i+1;j++){
					//cout << d[i-1][j-1] << " "<< d[i-1][j] << endl;
					k = max(d[i-1][j-1],d[i-1][j]);
					//cout << "K " << k<< " " << a[i][j] <<endl;
					d[i][j] = k+a[i][j];
					//cout << d[i][j] << endl;
					if(d[i][j]>maxValue)
						maxValue = d[i][j];
				}
			
			}
			else{

				for(j=1;j<2*n-i;j++){
					k = max(d[i-1][j],d[i-1][j+1]);
					d[i][j] = k+a[i][j];
					//cout << d[i][j] << endl;
					if(d[i][j]>maxValue)
						maxValue = d[i][j];
				}			
			}
		}
		cout << "Case "<< p << ": " << maxValue << endl;
	}
	return 0;
}
