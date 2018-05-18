
public class LongestCPrefix {
	
	public static String findPrefix(String str1, String str2) {
		
		String prefix="";
		int l1=str1.length(), l2=str2.length();
		
		if(l1>l2) l1=l2; 
		
		for(int i=0;i<l1;i++) {
			if(str1.charAt(i)==str2.charAt(i))
				prefix+=str1.charAt(i);
		}
		return prefix;
		
	}
	
    public static String longestCommonPrefix(String[] strs) {
    	
    	int l = strs.length, flag=0;
    	
    	String fString="";

    	if(l==0)
    		return fString;
    	else if(l==1) {
    		return strs[0];
    	}
    	else{
    		
    		for(int i=0;i<l;i++) {

        		if(i<l-1) {
        			if(strs[i].length()==0 || strs[i+1].length()==0)
        				return "";
        			
        			if(flag==0) {
        				fString = findPrefix ( strs[i] , strs[i+1] );
        				flag=1;

        			}else {
        				fString = findPrefix ( fString , strs[i]);
        			}	
        		}
        		else {
        			if(strs[i].length()==0)
        				return "";
        			fString = findPrefix ( fString , strs[i]);
        		}
        	}
    		
		}
    	
    	return fString;
    }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String [] strs = {"a"};
		System.out.println(longestCommonPrefix(strs));
	}

}
