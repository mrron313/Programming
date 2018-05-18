
public class PalindromeNumber {

	public static boolean isPalindrome(int x) {
		
		int res=0,s=x;
		
		while(x!=0) {
			res = (res*10) + (x%10);
			x=x/10;
		}
		
		if(s==res) {
			if(res<0)
				return false;
			else
				return true;
		}
		return false;
	}	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		System.out.println(isPalindrome(-121));
		
	}

}
