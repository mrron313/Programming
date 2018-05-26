#include<iostream>

using namespace std;

    int hammingDistance(int x, int y) {
        
        int a, b, hammingD=0;
        char m,n;
        while(x!=0 || y!=0){
        	
        	if(x!=0 && y!=0){
				(x%2==1)? m='1': m='0';
	        	x=x/2;
	        	
				(y%2==1)? n='1': n='0';
	        	y=y/2;
	        	
	        	if(m!=n)
        			hammingD++;
        	//cout << "x" << x << " y" << y << " " << endl;
			//cout << "1st if" << m << " " << n << " " << hammingD << endl;
			}else if(x==0 && y!=0){
				(y%2==1)? n='1': n='0';
	        	y=y/2;	
				if(n=='1'){
					hammingD++;
				}	
		//	cout << "2nd if" << m << " " << n << " " << hammingD << endl;
			}else if(x!=0 && y==0){
				(x%2==1)? m='1': m='0';
	        	x=x/2;	
				if(m=='1'){
					hammingD++;
				}
			//	cout << "3rd if" << m << " " << n << " " << hammingD << endl;			
			}
        		
		}
        
        cout << hammingD << endl;
        
        return hammingD;
    }

int main(){
	
	int a=3;
	int b=8;
	
	hammingDistance(a,b);

}
