#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main(){
	
	int t, i=1, ax, ay, bx, by, cx, cy, dx, dy;
	int area;
	
	scanf("%d",&t);
	
	while(i<=t){
		
		scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy);
		dx = ax + (cx-bx);
		dy = ay + (cy-by);
		
		area = ((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax));
		
		area/=2;
		
		if(area<0) area=0-area;
		
		printf("Case %d: %d %d %d\n",i,dx,dy,area);

		i++;
	} 
	
	return 0;
}
