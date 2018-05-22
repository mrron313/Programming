#include<bits/stdc++.h>

using namespace std;
//vector<vector<int> > generate(int numRows) {
void generate(int numRows) {

	 vector<vector<int> > TR;
	 
	 for(int i=0; i<numRows ; i++){
	 	vector<int>Elements;
	 	if(i<5){
			int v = pow(11,i);
			while(v>0){
				Elements.push_back(v%10);
				v=v/10;
			}
			TR.push_back(Elements);
		}
	 	if(i>=5 && numRows>5){
		 	vector<int>Elements;
			Elements.push_back(1);
			int row=TR.size();
			for(int j=1;j<i;j++){
				int n = TR[row-1][j-1] + TR[row-1][j];
				Elements.push_back(n);
			}
			Elements.push_back(1);
			TR.push_back(Elements);
		}
	 }
	 
	//int row = TR.size();
	
	//for(int i=0; i<numRows ; i++){
	//	int col = TR[i].size();
	//	for(int j=0;j<col;j++)
	//		cout << TR[i][j];
	//	cout<<endl;
	//}
	
	//return TR;
}


int main(){
	
	generate(8);
	
	return 0;
}
