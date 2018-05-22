
#include<bits/stdc++.h>

using namespace std;

vector<vector<int> > flipAndInvertImage(vector<vector<int> >& A) {
    
	int row = A.size();
	int col;	
	
	vector<vector<int> > B;

	for( int i=0 ; i<row ; i++ ){
		col = A[i].size();
		vector<int> Elements;
		for( int j=col-1 ; j>=0 ; j-- ){
			if(A[i][j]==0)
				Elements.push_back(1);
			else
				Elements.push_back(0);
		}
		B.push_back(Elements);
	}
	
	return B;
}

int main(){
    
	vector<vector<int> > Numbers ;

	for( int i=0 ; i<4 ; i++ ){
		
		vector<int> Elements;
		for( int j=0 ; j<4 ; j++ ){
			Elements.push_back(j%2);
		}
		Numbers.push_back(Elements);
	}
	
	flipAndInvertImage(Numbers);
}
