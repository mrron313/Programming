
public class ReverseInteger {
	
    public static int reverse(int x) {
    	
    	int res=0;
    	
    	try {
        	while( x!=0 ) {
        		res = Math.addExact(Math.multiplyExact(res,10),x%10);
        		x=x/10;
        	}
    	}catch(Exception e) {
    		return 0;
    	}
    	
    	return res;
    	
    }
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		System.out.println(reverse(-2147483412));
		System.out.println(reverse(1534236469));
		System.out.println(reverse(123));
		System.out.println(reverse(-123));

	}

}
