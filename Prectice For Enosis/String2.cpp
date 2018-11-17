#include<iostream>

using namespace std;

int main(){
	
	string str = "Arif is a good boy", str2;
	int i, l, p, c=0, k=0, lastspace;
	
	l = str.length();
	
	for(i=0;i<l;i++){
		c++;
		if(str[i]==' '){
			p=i;
		    lastspace=p;
			p=p-1;
			c--;
			while(c>0){
				str2[k]=str[p];
				c--;
				k++;
				p--;
			}
			str2[k++]=' ';
			c=0;
		}
	}

	for(int m=l-1;m>lastspace;m--){
		str2[k]=str[m];
		k++;	
	}
	
	for(i=0;i<l;i++)
		cout << str2[i];
	
	
	return 0 ;
}
