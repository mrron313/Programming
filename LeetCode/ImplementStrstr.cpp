#include<iostream>
#include<string>

using namespace std;

    int strStr(string haystack, string needle) {
       
        int r=-1;
	    if(needle=="")
        	r = 0 ;
        else{
			r = haystack.find(needle);
		}
		
		return r;	
    }

int main(){
	
	string haystack = "hello", needle = "k" ;
	
	cout << strStr(haystack,needle);
}
