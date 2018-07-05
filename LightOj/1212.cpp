#include<stdio.h>
#include<string.h>
#include<malloc.h>

int size;

typedef struct Node{
	int val;
	Node *next;
};

Node *head;

void createNodeRight(int a){
	
	Node *n = (Node *)malloc(sizeof(Node));
	Node *t;
	
	n->val=a;
	if(head==NULL){
		n->next=NULL;
		head=n;
		size++;
	}else{
		t=head;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=n;
		n->next=NULL;
		size++;
	}
}

void createNodeLeft(int a){
	
	Node *n = (Node *)malloc(sizeof(Node));
	Node *t; size++;
	
	n->val=a;
	if(head==NULL){
		n->next=NULL;
		head=n;
	}else{
		n->next=head;
		head=n;
	}
}

int removeLeft(){
	
	Node *n ;
	n=head;
	int a = n->val;
	head=n->next;
	free(n);
	size--;
	return a;
	
}

int removeRight(){
	
	Node *t, *prev;
	size--;
	t=head;
	int a;
	
	if(t->next==NULL){
		head=NULL;
		a = t->val;
		free(t);
	}else{
		while(t->next!=NULL){
			prev=t;
			t=t->next;
		}
		a = t->val;
		prev->next=NULL;
		free(t);	
	}

	return a;
}

int main(){
	
	int t, a, i=1, n, m, k;
	char s[20];
	
	scanf("%d",&t);
	
	while(i<=t){
		size=0; head=NULL;
		scanf("%d%d",&n,&m);
		printf("Case %d:\n",i);
		while(m>0){
			scanf("%s",s);
				
			if(s[1]=='u'){
				scanf("%d",&a);
				if(size==n)
					printf("The queue is full\n");
				else{
				
					if(s[4]=='L'){
						createNodeLeft(a);
						printf("Pushed in left: %d\n",a);
					}else{
						createNodeRight(a);
						printf("Pushed in right: %d\n",a);
					}
					
				}
			}
			
			else{
				
				if(size<=0 || head==NULL)
					printf("The queue is empty\n");
					
				else if(s[3]=='L'){
					printf("Popped from left: %d\n",removeLeft());
				}else{
					printf("Popped from right: %d\n",removeRight());
				}
			}
			
			m--;
		}
		i++;
	}
	
	return 0;
	
}
