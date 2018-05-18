
public class RomantoInteger {

	public static String romanToInt(int num) {
		
		String resString="", s = String.valueOf(num) ;
		int l = s.length(), i=0 ;
		int m = l, p;
		
		for(i=0;i<l;i++) {
			int k = s.charAt(i) - '0';
			if(m==4) {
				p=k;
				while(p>0) {
					resString+="M";
					p--;
				}
			}
			else if(m==3) {
				if(k<4) {
					p=k;
					while(p>0) {
						resString+="C";
						p--;
					}
				}else if(k==5){
					resString+="D";
				}else if(k==4){
					resString+="CD";
				}else if(k==9){
					resString+="CM";
				}else {
					resString+="D";
					p=k-5;
					while(p>0) {
						resString+="C";
						p--;
					}
				}
			}
			else if(m==2) {
				if(k<4) {
					p=k;
					while(p>0) {
						resString+="X";
						p--;
					}
				}else if(k==5){
					resString+="L";
				}else if(k==4){
					resString+="XL";
				}else if(k==9){
					resString+="XC";
				}else {
					resString+="L";
					p=k-5;
					while(p>0) {
						resString+="X";
						p--;
					}
				}
			}
			else {
				if(k<4) {
					p=k;
					while(p>0) {
						resString+="I";
						p--;
					}
				}else if(k==5){
					resString+="V";
				}else if(k==4){
					resString+="IV";
				}else if(k==9){
					resString+="IX";
				}else {
					resString+="V";
					p=k-5;
					while(p>0) {
						resString+="I";
						p--;
					}
				}
			}
			m--;
		}		
		
		return resString;
				
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int num = 58;
		
		System.out.println(romanToInt(num));
		
	}

}
