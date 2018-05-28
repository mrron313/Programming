#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a, b, t, kase=1;
	
	cin >> t ;
	
	while(kase<=t){
		cin >> a >> b;
		int res = abs(b-a)*4 + 2*3 + 5 + a*4 + 3 + 5 ;
		cout << "Case " << kase << ": " << res << endl;
		kase++;
	}
	return 0 ;
}
