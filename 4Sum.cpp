//https://leetcode.com/problems/4sum/?envType=problem-list-v2&envId=sorting
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int l=j+1,r=n-1;
                while(l<r){
                    long long sum=(long long)nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum>target) r--;
                    else if(sum<target) l++;
                    else{
                        s.insert({nums[i],nums[j],nums[l],nums[r]});
                        l++; 
                        r--;
                    }
                }
            }
        }
        for(auto it: s){
            ans.push_back(it);
        }
        return ans;
    }
};
