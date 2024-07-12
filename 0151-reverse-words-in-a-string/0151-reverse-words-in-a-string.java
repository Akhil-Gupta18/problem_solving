class Solution {
    public String reverseWords(String s) 
    {
        Stack<String> stact = new Stack<String>();
        int n = s.length();
        String temp = "";
        for(int i = 0;i<n;i++)
        {
            char c = s.charAt(i);
            if(c!=' ')
            {
                temp = temp + c;
            }
            else
            {
                if(!temp.equals(""))
                {
                stact.push(temp);
                }
                temp = "";
            }
            
        }
        if(!temp.equals(""))
        {
            stact.push(temp);
        }
        String ans = stact.pop();
        while(stact.size()!=0)
        {
            ans=ans +" " + stact.pop(); 
        }
        return ans;
    }
}