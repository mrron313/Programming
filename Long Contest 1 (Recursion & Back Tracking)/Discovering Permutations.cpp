#include<iostream>

using namespace std;
	
	char alpha[27] ;
	
	int used[27] = {0};
	int b,c=0;

	void permutation(int at, int n){
		
		if(at==n+1 && b>0){
			for(int i=1;i<=n;i++){
				cout<<alpha[i];
			}
			b--;
			cout << endl;
			return ;
		}
		
		for(int i=1;i<=n && b>0;i++){
			if(!used[i]){
				used[i]=1;
				alpha[at]= 64+i;	
				permutation(at+1,n);
				used[i]=0;
			}
		}
		
	}
	
	int main() {
		
		int t;
		int i=0, a;

	    cin>> t;
		
	    while(i<t) {
			cin>>a>>b;
			cout << "Case "<< i+1 << ":" <<endl;
			permutation(1,a);
			i++;
	    }
	}
