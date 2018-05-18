import java.util.Arrays;

public class TwoSum {

	public static int[] twoSum(int arr[] , int target) {
	
	  int n = arr.length, temp, i, j, flag, r1, r2=0;
	  
		for(i=0;i<n;i++){
			flag = 0;
			temp = target;
			r1 = i ;
			temp = temp - arr[i];
			for(j=i+1;j<n;j++){
				if(temp-arr[j]==0){
					r2 = j;
					flag=1;
					break;
				}
			}
			if(flag==1) {
				return new int[] {r1,r2} ;
			}
		}
		
		//throw new IllegalArgumentException("No Sum Sollution.");
		return new int[] {-1,-1};
		
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int result[] = twoSum(new int[] {3,2,4},6) ;
		System.out.print(Arrays.toString(result));
	}

}
