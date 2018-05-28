#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	long long r1, c1, r2, c2, x, y ;
	int c=0, t, kase=1;
	
	cin >> t ;
	
	while(kase<=t){
		cin >> r1 >> c1 >> r2 >> c2 ;
		
		x = abs(r2-r1);
		y = abs(c2-c1);
		
		if( x==y )  cout << "Case " << kase << ": " << 1 << endl;
		else if( (x-y) %2==0 )
			cout << "Case " << kase << ": " << 2 << endl;
		else cout << "Case " << kase << ": impossible" << endl;

		
		kase++;
	}

	return 0;
}
