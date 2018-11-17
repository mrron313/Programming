#include<iostream>

using namespace std;

int main(){
	
	int b[5] = {10,20,30,40,50};
	int *a = &b[0];
	int sum=10;
	
	int l = sizeof(b)/sizeof(b[0]);
	
	for(int i=0; i<l ;i++){
		*(a+i)=5;
	}
	
	int *k;
	k=&sum;
	
	for(int i=0; i<l ;i++){
		cout << *(a+i) << endl;
	}
	*k=100;
	cout << sum<< endl;
	
	 unsigned int nm ;
	
	cout << sizeof(nm)<<endl;
	
	int abc = 2;
	
	cout << (char) abc;
}
