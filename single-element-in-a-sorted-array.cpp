//https://leetcode.com/problems/single-element-in-a-sorted-array/
class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n=a.size();
        int st=0,end=n-1;
        while(st<end){
            int mid=st+(end-st)/2;
            
            if(mid%2) mid--;
            
            if(a[mid]==a[mid+1]){
                st=mid+2;
            }else{
                end=mid;
            }
        }
        return a[st];
    }
};
