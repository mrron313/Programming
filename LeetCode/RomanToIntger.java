
public class RomanToIntger {
	
	
    public static int romanToInt(String s) {
        
    	int l = s.length(), res=0, i;
		//"MMCCCXCIX"
		for(i=l-1 ; i>0 ; i--) {
			
			//System.out.println(i);

			if(s.charAt(i)=='I') {
				if(s.charAt(i-1)=='I') {
					res+=2;
					i--;
				}
				else
					res+=1;
			}
			else if(s.charAt(i)=='V') {
				if(s.charAt(i-1)=='I') {
					res+=4;
					i--;
				}
				else
					res+=5;
			}
			else if(s.charAt(i)=='X') {
				if(s.charAt(i-1)=='I'){
					res+=9;
					i--;
				}
				else
					res+=10;
			}
			else if(s.charAt(i)=='L') {
				if(s.charAt(i-1)=='X'){
					res+=40;
					i--;
				}
				else
					res+=50;
			}
			else if(s.charAt(i)=='C') {
				if(s.charAt(i-1)=='X'){
					res+=90;
					i--;
				}
				else
					res+=100;
			}
			else if(s.charAt(i)=='D') {
				if(s.charAt(i-1)=='C'){
					res+=400;
					i--;
				}
				else
					res+=500;
			}
			else {
				if(s.charAt(i-1)=='C'){
					res+=900;
					i--;
				}
				else
					res+=1000;
			}
			
			//System.out.println(res);
		}
		
		
		if(i==0) {
			
			if(s.charAt(0)=='I')
				res+=1;
			else if(s.charAt(0)=='V')
				res+=5;
			else if(s.charAt(0)=='X')
				res+=10;
			else if(s.charAt(0)=='L')
				res+=50;
			else if(s.charAt(0)=='C')
				res+=100;
			else if(s.charAt(0)=='D')
				res+=500;
			else if(s.charAt(0)=='M')
				res+=1000;
				
		}
		
    return res;
    		
    }
    
    
	public static void main(String[] args) {
		// TODO Auto-generated method stub
	
		String s = "D";
		System.out.println(romanToInt(s));
		
	}

}
