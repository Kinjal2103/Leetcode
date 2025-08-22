//https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
public:
    int binarySearch(vector<int>nums ,int t, int st,int end){
        if(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==t) return mid;
            if(nums[st] <= nums[mid]) {
                if(nums[st] <= t && t < nums[mid]) {
                    return binarySearch(nums, t, st, mid - 1);
                } else {
                    return binarySearch(nums, t, mid + 1, end);
                }
            }

            else {
                if(nums[mid] < t && t <= nums[end]) {
                    return binarySearch(nums, t, mid + 1, end);
                } else {
                    return binarySearch(nums, t, st, mid - 1);
                }
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int t) {
        int n=nums.size();
        int ans=binarySearch(nums,t,0,n-1);
        return ans;
    }
};
