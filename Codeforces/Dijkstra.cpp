#include<iostream>
#include<queue>
#include<vector>

#define SIZE 100001

using namespace std;

struct Edge{
	int source;
	int dest;
	long long cost;
};

long long dist[SIZE], visited[SIZE], parent[SIZE];

vector<Edge> E;

struct Node{
	int at, cost;
	
	Node(int _at, int _cost){
		at = _at;
		cost = _cost;
	}
};

bool operator<(Node A,Node B){
	return A.cost>B.cost;
}

void printPath(int n){
	
	int child = n;
	int I = 1, p, path[SIZE];
	
	while (1)
	{
		p = parent[child];
		//cout << "p = " << p << " child = " << child << NL;
		path[I] = p;

		if (p == 1)
			break;

		child = p;
		I++;
	}
	path[0] = n;

	for (int K = I; K >= 0; K--)
		printf("%lld ", path[K]);
	
}

void Dijkstra(int n){
	
	for(int i=1;i<=n;i++)
		dist[i] = 10000000000000000;
		
	int s = 1;
	dist[s]=0;
	priority_queue<Node> Q;
	Q.push(Node(s,dist[s]));
	
	while(!Q.empty()){
		Node u = Q.top();
		visited[u.at] = 1;
		Q.pop();
		
		for(Edge e: E){
			if(e.source == u.at){
				if(visited[e.dest]==0){
					if(dist[u.at]+e.cost<dist[e.dest]){
						dist[e.dest] = dist[u.at]+e.cost;
						parent[e.dest] = u.at;
						Q.push(Node(e.dest,dist[e.dest]));
					}
				}
			}
		}
	}
	
	if(dist[n]!=10000000000000000)
		printPath(n);
	else 
		printf("-1");
	
}

int main(){
	
	int n, m, a, b, c,i=1;
	
	scanf("%d%d",&n,&m);
	
	while(i<=m){
		scanf("%d%d%d",&a,&b,&c);
		Edge e;
		e.source = a;
		e.dest = b;
		e.cost = c;
		E.push_back(e);
		e.source = b;
		e.dest = a;
		e.cost = c;
		E.push_back(e);
		i++;
	}
		
	Dijkstra(n);
	
	return 0;
}
/*
	5 6
	1 2 3
	2 4 1
	2 3 2
	3 4 1
	3 5 2
	4 5 4
*/
