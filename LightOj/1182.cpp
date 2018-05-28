#include<iostream>

using namespace std;

int main(){
	
	long long a;
	int c=0, t, kase=1;
	
	cin >> t ;
	
	while(kase<=t){
		cin >> a;
		c=0;
		while(a!=0){
			a = a & (a-1);
			c++;
		}
		
		if(c%2==1)
			cout << "Case " << kase << ": " << "odd" << endl;	
		else
			cout << "Case " << kase << ": " << "even" << endl;	
		
		kase++;
	}

	return 0;
}
