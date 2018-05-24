#include<iostream>

using namespace std;

bool judgeCircle(string moves) {

	int l, r, u, d ;
	bool res;
	
	l=r=u=d=0; 
	int a = moves.length();
	
	if(a%2==1)
		res= false;
	else{
        int f=0;
		for(int i=0;i<a;i++){
			if(moves[i]=='U') u++;
			else if(moves[i]=='L') l++;
			else if(moves[i]=='R') r++;
			else if(moves[i]=='D') d++;
		}
		if( (l==r) && l>0 && r>0 && u==0 && d==0)
			res = true;
        else if( (u==d) && u>0 && d>0 && l==0 && r==0 )
            res = true;
        else if( (u==d) && (l==r) && u>0 && d>0 && l>0 && r>0 )
            res = true;
        else
            res=false;
    }
	
	return res;
}

int main(){
	
	string str1 = "LRRLR";
	
	cout << judgeCircle(str1);

}
