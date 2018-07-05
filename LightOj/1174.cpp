#include<iostream>

using namespace std;

#define N 102

int dist[N][N], node, source, destination, m;

int maxi(int a,int b){
	if(a>b) return a;
	else return b;
}

void floydWarshall ()
{
    int i, j, k;
            
    for (k = 0; k < node; k++)
    {
        for (i = 0; i < node; i++)
        {
            for (j = 0; j < node; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
				}
            }
        }
    }
	
    for(int i=0;i<node;i++){
	    //	cout << dist[source][i] << " " << dist[i][destination] << " " << max << endl;
		m = maxi(m,(dist[source][i]+dist[i][destination]));
	}

}

int main(){
	
	int edge, t, kase=1, a, b;
	
	cin >> t;
	
	while(kase<=t){
		cin >> node;
		cin >> edge;
		
        for(a=0; a<node; a++)
            for(b=0; b<node; b++) {
                if(a==b)dist[a][b]=0;
                else{
                	dist[a][b]=dist[a][b]=50000;
				} 
        	}
        	
        m=0;
		while(edge>0){
			cin >> a >> b;
			dist[a][b]=dist[b][a]=1;
			edge--;
		}
		cin >> source >> destination;
				
		floydWarshall();
		cout << "Case " << kase << ": " << m << endl;
			
		kase++;	
	}
	
	return 0;
}

