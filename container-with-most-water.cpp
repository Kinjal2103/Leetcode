//https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=INT_MIN;
        int n=height.size();
        int l=0,r=n-1;
        while(l<r){
            ans=max(ans,min(height[l],height[r])*(r-l));
            if(height[l]>=height[r]) r--;
            else l++;
        }
        return ans;
    }
};
