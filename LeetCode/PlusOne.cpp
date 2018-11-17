#include<bits/stdc++.h>

using namespace std;

int main(){
        
        vector<int> digits;
        vector<int>::iterator it;
        
		digits.push_back(8);
		digits.push_back(9);
		digits.push_back(9);
		digits.push_back(9);
		//digits.push_back(5);
		//digits.push_back(4);
		//digits.push_back(3);
		//digits.push_back(2);
		//digits.push_back(1);
		//digits.push_back(0);
		
       int l = digits.size();
       int carry =0; int i;
       
       int k = digits[l-1];
       k++;
       
       if(k<=9){
         digits[l-1] = k;
	   }else{
	   	digits[l-1] = 0;
	   	carry=1;
	   		if(l>1)
		   		for(i=l-2;i>0;i--){
		   			k=digits[i]+carry;
		   			if(k<=9){
		   				digits[i] = k;
		   				carry=0;
		   				break;
					}else{
						digits[i] = 0;
						carry=1;
					}
				}
			else i=0;
	   }
       
       if(i==0 && carry==1){
           if(l==1){
       			it = digits.begin();
 				it = digits.insert (it,1); 
           }else{
       		k = digits[i]+1;
       		if(k<=9)
       			digits[i]=k;
       		else{
       			digits[i]=0;
       			it = digits.begin();
 				it = digits.insert (it,1);
			}
           }
	   }
	           
		l = digits.size();
       for(i=0;i<l;i++)
            cout<<digits[i];
}
