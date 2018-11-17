#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;

int main(){
	
	cout << endl << endl;	
	  string ami = "Test string";
	  string ami2;
	  int i, j;
	  for ( i = ami.length()-1,j=0 ; i >= 0 ; i--,j++)
	  {
	        ami2[j]=ami[i] ;
	        cout << ami2[j];
	  }		
//	  cout << ami2;
	  
}
