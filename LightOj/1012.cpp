#include<iostream>

using namespace std;

int arr[405][405], visited[405], r, c;

void DFS(int s){
	visited[s]=1;

    for(int w=0;w<=r;w++)
    	if(arr[s][w]==2 && !visited[w]){
        	c++;
		    DFS(w);
    	}	
}

int main(){
	
	char ch;
	int row, col, t, s, kase=1;
	
	cin >> t;
	
	while(t>0){
		cin >> col >> row;
		for(int i=0;i<405;i++) {
			visited[i]=0;
			for(int j=0;j<405;j++){
				arr[i][j]=0;
			} 
		}
		c=0;
		for(int i=0; i<row; i++)
			for(int j=0; j<col; j++){
				cin >> ch;
				r = (i*(col)+(j));
				int prev_row = ((i-1)*(col)+(j));
				int next_row = ((i+1)*(col)+(j));
				if(ch=='#'){
					if(r-1>=0 && r%col!=0){
						arr[r][r-1]=arr[r-1][r] = 1;
					}
					if((r+1)%col!=0 && (r+1)<row*col){
						arr[r][r+1] = arr[r+1][r] = 1;
					}
					if(prev_row>=0){
						arr[r][prev_row] = arr[prev_row][r] = 1;
					}
					if(next_row<col*row){
						arr[r][next_row] = arr[next_row][r] = 1;
					}
				}else if(ch=='.' || ch=='@'){
					if(r-1>=0 && arr[r][r-1]!=1 && r%col!=0){
						arr[r][r-1]=arr[r-1][r] = 2;
					}
					if((r+1)%col!=0 && (r+1)<row*col){
						arr[r][r+1] = arr[r+1][r] = 2;
					}
					if(prev_row>=0 && arr[r][prev_row]!=1){
						arr[r][prev_row] = arr[prev_row][r] = 2;
					}
					if(next_row<col*row){
						arr[r][next_row] = arr[next_row][r] = 2;
					}
					if(ch=='@') s=r;
				}
			}

			DFS(s);
			cout << "Case " << kase << ": " << c+1 <<endl;
			kase++;
		t--;
	}
	
	return 0;
}
