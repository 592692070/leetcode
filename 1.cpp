/*
5
-1 -2 -3 -4 -5
-8
*/
#include <iostream>
#include <algorithm>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int>ans;
        map<int,int>M;
        for(int i=0;i<nums.size();i++) M[nums[i]]=i+1;
        for(map<int,int>::iterator it=M.begin();it!=M.end();it++)
        {
            cout<<it->first<<"  "<<it->second<<endl;
        }
        cout<<"------------------"<<endl;
        for(int i=0;i<nums.size();i++)
        {
            int MMM=M[target-nums[i]];
            if(MMM!=i+1&&MMM>0)
            {
                ans.push_back(i);
                ans.push_back(MMM-1);
                break;
            }
        }
        return ans;
    }
}x;

int main()
{
    vector<int>input;
    int n;int tmp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        input.push_back(tmp);
    }
    cin>>tmp;
    vector<int>ans=x.twoSum(input,tmp);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
