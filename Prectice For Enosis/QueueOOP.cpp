#include<iostream>

#define SIZE 10

using namespace std;

class MyQ{
	
	int head;
	char Q[SIZE];
	int tail;
	
	public:
		MyQ();
		void push(char ch);
		char pop();
		
};

MyQ::MyQ(){
	head=-1;
	tail=0;
}

void MyQ::push(char ch){
	if(tail==SIZE){
		cout << "Queue is full!" << endl; 
	}
	else{
		if(head==-1)
			head=0;	
		Q[tail]=ch;	
		cout << Q[tail++] << " is pushed!" << endl;
	}
}

char MyQ::pop(){
	if(head==-1 || head==tail)
		cout << "Queue is empty!" << endl;
	else{
		cout << Q[head++] << " is popped" << endl;
	}
}


int main(){
	
	MyQ q;
	
	for(int i=0; i<SIZE+1; i++)
		q.push(i+65);
	
	for(int i=0; i<SIZE+1; i++)
		q.pop();
}
