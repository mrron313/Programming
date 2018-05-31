#include<iostream>

using namespace std;

int mini(int a, int b){
	if(a<b) return a; else return b; 
}

int maxi(int a, int b){
	if(a>b) return a; else return b; 
}

int main(){
	
	int x, y, z, w, h, l, t, kase=1, n;
	int a1, a2, a3, b1, b2, b3 ;
	
	cin >> t;
	
	while(kase<=t)
	{
		x=y=z=0;
		w=h=l=1000;
		
		cin >> n ;
		
		while(n>0){
			cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 ; 
			x = maxi(a1,x);
			w = mini(b1,w);
			
			y = maxi(a2,y);
			h = mini(b2,h);
			
			z = maxi(a3,z);
			l = mini(b3,l);
			n--;
		}
		
		int res;
		
		if( (x>w) || (y>h) || (z>l) ) res=0;
		else res=(w-x) * (h-y) * (l-z) ;
		
		cout << "Case " << kase << ": " ;
		cout << res << endl;

		kase++;
	}
	

	return 0;
}
