#include<bits/stdc++.h>

using namespace std;

typedef struct items{
	int price;
	int weight;
};

bool cmp(items a, items b){
	return a.price/a.weight > b.price/b.weight;
}

int min(int a,int b){ if(a<b) return a; else return b;}

int main(){
	
	items item[100];
	
	int n, i=0, W, ans=0, w ;
	
	cout << "Number of items : " << endl;
	cin >> n;
	
	cout << "Knapsack Weight : " << endl;
	cin >> W;
	
	for(int i=0;i<n;i++){
		cin >> item[i].weight >> item[i].price ;
	}
	
	for(int i=0;i<n;i++){
		cout << "item " << 0 << " : " << item[i].weight << " " << item[i].price << endl; 
	}
	
	cout << endl; 
	
	sort(item,item+n,cmp);
	
	cout << endl; 
	
	for(int i=0;i<n;i++){
		cout << "item " << 0 << " : " << item[i].weight << " " << item[i].price << endl; 
	}
	
	for(int i=0; i<n; i++){
		w = min(W,item[i].weight);
		W-=w;
		cout << w << " taken." << endl;
		ans += w*(item[i].price/item[i].weight);
	}
	
	cout << "Cost " << ans;
	
	return 0;
}
