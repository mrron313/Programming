#include<iostream>

using namespace std;

int main(){
	
	int t, x, y, m, kase=1;
	int a, b, c, d;
	
	cin >> t;
	
	while(kase<=t){
		
		cin >> a >> b >> c >> d;
		cin >> m;
		
		cout << "Case " << kase << ":" << endl;
		
		while(m>0){
			cin >> x >> y;
			
			if(x>=a && x<=c && y>=b && y<=d){
				cout << "Yes" << endl; 
			}
			else{
				cout << "No" << endl; 
			}
			
			m--;
		}
		kase++;
	}
	return 0;
}
