#include<iostream>
#include<stack>

using namespace std;

int main(){
	
	stack <int> st;
	
	st.push(10);
	st.push(20);
	st.push(30);

//	cout << "Stack size :" << st.size() << endl ;
	int l = st.size();
	
	for(int i=0;i<l;i++){
		cout << "Popping " << st.top() << endl ;
		st.pop();
		
		cout << "Stack size :" << st.size() << endl ;
	}
	
	return 0;
}
