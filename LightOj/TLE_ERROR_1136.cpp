#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	
	long long a, b, sum, c, p;
	int t,kase=1;
	
	scanf("%d",&t);		
	
	while(kase<=t){

		scanf("%lld%lld",&a,&b);		
		sum=0; c=0;
		p = a;
		while(a>0){
			sum+=a;
			a--;
		}
		//cout << sum << endl;
		if(sum%3==0) {
			cout << sum << endl;
			c++;
		}
		
		if(p!=b){
			p++;
			while(p<=b){
				sum+=p;
				//cout << c << endl;
				if(sum%3==0){
					c++;
				//	cout << p << endl;
				}
				p++;
			}
		}

		printf("Case %d: %lld\n",kase,c);
		
		kase++;
	}
	
	return 0;
}
