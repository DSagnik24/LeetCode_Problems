
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0, j = 0 ;

        if (needle.size() == 0) return 0;
        
        while(i < haystack.size())
        {
            while(j < needle.size())
            {
                if(needle[j] != haystack[i+j])
                {
                    break;
                }
                j++;
            }
            if (j == needle.size()) 
                return i;
            else {
                j = 0;
            } 
            i++; 
        }
        return -1;
        
    }
};