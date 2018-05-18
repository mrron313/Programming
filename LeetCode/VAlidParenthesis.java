import java.util.Stack;

public class VAlidParenthesis {

    public static boolean isValid(String s) {
    	
    	int l = s.length();
    	Stack<String> myStack = new Stack();
    	int flag=0;
    	
    	for(int i=0 ; i<l ; i++) {
    		if(s.charAt(i)=='(')
    	    	myStack.push(")");
    		else if(s.charAt(i)=='{')
    	    	myStack.push("}");
    		else if(s.charAt(i)=='[')
    	    	myStack.push("]");
    		
    		else if(s.charAt(i)==')')
	    		if(myStack.isEmpty())
	    			flag=1;
	    		else {
	    			if(myStack.lastElement()==")") {
	    				myStack.pop();
	    	    	}
	    			else flag=1;
	    		}
    		
    		else if(s.charAt(i)=='}')
	    		if(myStack.isEmpty())
	    			flag=1;
	    		else {
	    			if(myStack.lastElement()=="}") {
	    				myStack.pop();
	    	    	}
	    			else flag=1;
	    		}
    		
    		else if(s.charAt(i)==']')
	    		if(myStack.isEmpty())
	    			flag=1;
	    		else {
	    			if(myStack.lastElement()=="]") {
	    				myStack.pop();
	    	    	}
	    			else flag=1;
	    		}
    			
    		
    	}
    	
    	if (flag==1 || !myStack.isEmpty())
    		return false;
    	
    	return true;
    }
    
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String par = ")}{{{()}[]()}";
		
		System.out.println(isValid(par));
	}

}
