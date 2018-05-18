
public class RemoveDuplicates {

    public static int removeDuplicates(int[] nums) {
        
    	int len=0,c=0,f=0;
    	
    	if(nums.length>0) {
    		c=nums[0];
    		nums[len]=nums[len];
    		len++;
    	}else if (nums.length == 0) return 0;
    	
    	for(int i=0;i<nums.length;) {
    		f=0;
    		for(int j=i+1;j<nums.length;j++) {
    	    			
    	    	Integer a = new Integer(nums[i]);
    	    	Integer b = new Integer(nums[j]);
    	    	Integer d = new Integer(c);
    	    	
				//System.out.println(a + " " + b + " " + d);

    			if(  (!a.equals(b)) && (!b.equals(d))  ) {
    				//System.out.println(a + " " + b + " " + d);
    				nums[len++]=b;
    		    	//System.out.println(len);
    				c=nums[j];
    				i=j;
    				f=1;
    				break;
    			}
    		}
    		if(f==0)
    			i++;
    	}
    	return len;
    }
    
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] nums = {1,1,2};
		System.out.println("Res: "+removeDuplicates(nums));
	}

}
