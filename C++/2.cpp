#include<iostream>

using namespace std;

void callRef(int *val){
	cout << *val << endl;
}

void callPointer(int &val){
	cout << val << endl;
}

void arrCall(int arr[],int l){
	for(int i=0;i<l;i++)
		cout << arr[i] << " ";
}

void arrCall1(int *arr,int l){
	for(int i=0;i<l;i++)
		cout << *arr+i << " ";
}

void arrCall2(int &arr,int l){
	for(int i=0;i<l;i++)
		cout << arr+i << " ";
}

int main(){
	
	int val=4;
	int arr[4] = {1,2,3,4}; 
	
	callRef(&val);
	
	callPointer(val);
	
	arrCall(arr,val);
	
	arrCall1(arr,val);
	
	arrCall2(*arr,val);

	return 0;
}
