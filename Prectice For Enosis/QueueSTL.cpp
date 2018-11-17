#include<iostream>
#include<queue>

using namespace std;

int main(){
	
	queue <int> q;
	
	for(int i=0;i<5;i++){
		if(!q.empty())
			cout << q.front() << " " << q.back() << endl;
		q.push(i);	
	}
	
	int l=q.size() ;
	cout << l << endl ;
	
	for(int j=0; j<l; j++)	
	{
		cout << q.front() << " " << q.back() << endl;	
		q.pop();
	}	
}
