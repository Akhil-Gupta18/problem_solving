class Solution {
public:
    string defangIPaddr(string address) 
    {
        string str;
        int n = address.length();
        for(int i = 0;i<n;i++)
        {
            if(address[i] == '.')
            {
                str.push_back('[');
                str.push_back('.');
                str.push_back(']');
            }
            else
                str.push_back(address[i]);
        }
        return str;
    }
};