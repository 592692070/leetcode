class Solution {
public:
    int lengthOfLongestSubstring(string s) {
           int ans=0,i=0,j=0;
        int n=s.length();
        int vis[1000]={0};
        while(j<n)
        {
            if(vis[s[j] ]==0)
            {
                vis[s[j] ]=1;
                 j++;
                ans=max(j-i,ans);
            }
            else
            {
                while(s[i]!=s[j])
                {
                    vis[s[i] ]=0;
                    i++;
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};
