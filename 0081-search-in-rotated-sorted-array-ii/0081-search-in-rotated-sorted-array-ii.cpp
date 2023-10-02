class Solution {
public:
    bool search(vector<int>& A, int key) {
     int n = A.size();
    int l = 0, h = n-1;
    while(l<=h)
    {
        int m = (l+h)/2;
        if(A[m]==key)
        return true;
        if((A[l] == A[m]) && (A[h] == A[m]))
           {
                l++;
                h--;
            continue;
            }
            if(A[l]<=A[m])
        {
            if(A[l]<=key && key<=A[m])
            h = m-1;
            else
            l = m+1;
        }
        else
        {
            if(A[m]<=key && key<=A[h])
            l = m+1;
            else
            h = m-1;
        }
    }
    return false;   
    }
};