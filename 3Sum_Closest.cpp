//https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=nums[1]+nums[2]+nums[3];
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int l=i+1,r=n-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(abs(target-sum)<abs(target-ans)) ans=sum;
                if(sum==target) return target;
                else if (sum<target) l++;
                else r--;
            }
        }
        return ans;
    }
};
