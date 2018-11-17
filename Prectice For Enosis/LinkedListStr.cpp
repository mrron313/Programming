#include<iostream>
#include<cstdlib>

using namespace std;

typedef struct node{
	int data;
	node *next;
};

node *create_node(int val, node *next)
{
	node *new_node = (node *) malloc(sizeof(node));	
	
	if(new_node==NULL){
		cout << "Error allocating !!";
		exit(1);
	}else{
		new_node->next=next;
		new_node->data=val;
	}
	
	return new_node;
}

node *prepand_node(int val,node *head){
	
	node *new_node = (node *) malloc(sizeof(node));
	
	new_node = create_node(val,head);
	
	return new_node;
}


void *append_last(int val,node *head){
	
	if(head==NULL){
		cout << "List is empty!" << endl ;
	}
	else {
		node *n = (node *) malloc(sizeof(node));
		n=head;
		
		while(n->next!=NULL){
			n = n->next;
		}
		
		node *new_node = (node *) malloc(sizeof(node));

		new_node->data = val;
		new_node->next = n->next;
		n->next=new_node;
	}
}


void append_middle(int val, int a, node *head){
	
	node *new_node = (node *) malloc(sizeof(node));
	
	node *c = head;
	
	while(c->next!=NULL){
		if(c->data==a){
			new_node->data = val;
			new_node->next=c->next;
			c->next=new_node;
			break;
		}else{
			c=c->next;
		}
	}
	
	if(c->next==NULL){
		if(c->data==a){
			new_node->data = val;
			new_node->next=c->next;
			c->next=new_node;
		}
	}
}

int main(){
	node *n1, *n2, *n3, *head ;
	
	head = create_node(10,NULL);
	//cout << head->data << endl;
	
	n1=head;
	
	n2 = prepand_node(20,head);
	
	//cout << n2->data << endl;
	head=n2;
	
	n3 = prepand_node(30,head);
	
	//cout << n3->data<< endl;
	head=n3;
	
	append_last(40,head);
	
	append_middle(50,20,head);
	
	node *c = head;

	while(c->next!=NULL){
		cout << c->data << endl ;
		c=c->next;
	}
	
	cout << c->data << endl ;
	
}
