
public class JewelsAndStones {

    static int numJewelsInStones(String J, String S) {
    	
    	int c=0, k;
    	
    	for(int i=0;i<J.length();i++) {
    		k=0;
    		for(;k<S.length();) {
    			int l = S.indexOf(J.charAt(i),k);
    			if(l>=0) {
    				c++;
    				k=l;
    				k++;
    			}
    			else
    				k++;
    		}
    	}
		return c;		
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println(numJewelsInStones("aA","aaAABbA"));
	}

}
