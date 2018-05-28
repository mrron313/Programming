#include<iostream>
#include<cstdio>

using namespace std;

long long a, b, c, d, e, f, dp[10005];

long long fn( int n ) {
    if( n == 0 ) return a;
    else if( n == 1 ) return b;
    else if( n == 2 ) return c;
    else if( n == 3 ) return d;
    else if( n == 4 ) return e;
    else if( n == 5 ) return f;
    else if(dp[n]!=-1) return dp[n];
    else{
    	dp[n] = fn(n-1)%10000007 + fn(n-2)%10000007 + fn(n-3)%10000007 + fn(n-4)%10000007 + fn(n-5)%10000007 + fn(n-6)%10000007;
    	return dp[n];
	}
}
int main() {
    long long n, caseno = 0, cases;
    scanf("%d", &cases);
    
    while( cases-- ) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        for(int i=0;i<10005;i++) dp[i]=-1;
        printf("Case %lld: %lld\n", ++caseno, fn(n)%10000007 );
    }
    return 0;
}
