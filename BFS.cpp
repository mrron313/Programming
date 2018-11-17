#include<iostream>
#include<stdio.h>
#include<malloc.h>

typedef struct Queue{
	int front;
	int rear;
	int size;
	int capacity;
	int *elements;
};

Queue* createQueue(int maxElements)
{
    Queue *Q;
    Q = (Queue *)malloc(sizeof(Queue));
    Q->elements = (int *)malloc(sizeof(int *)*maxElements);
    Q->size = 0;
    Q->capacity = maxElements;
    Q->front = 0;
    Q->rear = -1;
    return Q;
}
void pop(Queue *Q)
{
    Q->size--;
    Q->front++;
    return;
}
int front(Queue *Q)
{
    return Q->elements[Q->front];
}
void push(Queue *Q,int element)
{
    Q->size++;
    Q->rear++;
    Q->elements[Q->rear] = element;
	return;
}

int main(){
	
	int n=5,e=5,a,b;
	
	Queue *q = createQueue(n);
	
	int **arr = (int **) malloc(n*sizeof(int *));
	int *c = (int *) malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++)
		arr[i] = (int *) malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			arr[i][j]=0;
	
	for(int i=0;i<e;i++){
		scanf("%d%d",&a,&b);
		arr[a][b]=1;
		arr[b][a]=1;
	}	
		
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			printf("%d ",arr[i][j]);
			
	printf("\n");
	
	for(int i=0;i<n;i++)
		c[i]=0;
	
	c[0]=1;
	
	push(q,0);
	
	//printf("%d",q->size);
	while(q->size!=0){
		int u=front(q);
		pop(q);
		
		printf("%d\n",u);
		
		for(int i=0;i<n;i++){
			if(arr[u][i]==1&&c[i]==0){
				push(q,i);
				c[i]=1;
			}
		}
		
	}
	
	
	return 0;
}


/*
0 1
0 2
0 3
1 3
2 4
*/
