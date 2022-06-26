class Solution {
    public boolean isValid(String s) {
        Stack<Character> brackets=new Stack<Character>();
        int n=s.length();
        for (int i = 0; i < n; i++) {
            char c=s.charAt(i);
            if(c=='(' || c=='{' || c=='[')
                brackets.push(c);
            else if (!brackets.empty()){
                if(c==')'&& brackets.pop()!='(')
                    return false;
                if(c=='}'&& brackets.pop()!='{')
                    return false;
                if(c==']'&& brackets.pop()!='[')
                    return false;
            }
            else
                return false;
        }
        if(brackets.empty())
            return true;
        return false;
    }
}