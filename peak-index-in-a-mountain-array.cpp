//https://leetcode.com/problems/peak-index-in-a-mountain-array/
class Solution {
public:
    int binarySearch(vector<int>&a,int st,int end){
        int mid=st+(end-st)/2;

        if(st<=end){
            if (mid > 0 && mid < (int)a.size() - 1) {
                if(a[mid-1]<a[mid] && a[mid]>a[mid+1]){
                    return mid;
                }else if(a[mid-1]<a[mid] && a[mid]<a[mid+1]){
                    return binarySearch(a,mid+1,end);
                }else{
                    return binarySearch(a,st,mid-1);
                }
            }
        }
        return -1; 
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int ans=binarySearch(arr,1,n-2);
        return ans;
    }
};
