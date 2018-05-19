#include<iostream>

using namespace std;

	int recursiveSum(int num[],int n) {
		
		if(n<0)
			return 0;
		
		return num[n]+recursiveSum(num,n-1);
	}
	
	
	int main() {
		// TODO Auto-generated method stub
		
		int t;
		int i=0, sum, k, a, b ;
	    int num[100];

	    cin>> t;
		
		while(i<t) {
			cin>>k;
			b=k;
			k--;
			while(k>=0) {
				cin>>a;
				num[k] = a;
				k--;	
			}
			cout << "Case " <<i+1 << ": " << recursiveSum(num,b-1) << endl;
			i++;
		}

	}
