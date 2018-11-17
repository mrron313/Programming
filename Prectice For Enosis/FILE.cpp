#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ifstream infile;
	int k, l , i , j ;
	int a, arr[10][10] ;
	
	infile.open("out.txt");
	for(i=0;i<2;i++)
		for(j=0;j<4;j++){
			infile>>a;
			arr[i][j]=a;
		}
		
	for(k=0;k<2;k++){
		for(l=0;l<4;l++){
			cout << arr[k][l];
		}	
		cout << endl ;
	}
	
	return 0;
}
