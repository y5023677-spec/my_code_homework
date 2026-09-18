class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        //按从小到大给数组排序
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            
            if(i>0&&nums[i]==nums[i-1])
                continue;
            if(i+2 < nums.size() &&nums[i]+nums[i+1]+nums[i+2]>0)
                break;
            if(nums[i]+nums[nums.size()-1]+nums[nums.size()-1]<0)
                continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int s=nums[i]+nums[j]+nums[k];
                if(s==0)
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(j<k&&nums[j]==nums[j+1])
                        j++;
                    while(k>j&&nums[k]==nums[k-1])
                        k--;
                    j++;
                    k--;
                }
                else if(s>0)
                {
                    k--;
                }
                else
                    j++;
            }
        }
        return ans;
    }
};
