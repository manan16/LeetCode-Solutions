class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        int count = 0;
        while(i<m+count && j<n){
            if(nums1[i] > nums2[j]){
                nums1.insert(nums1.begin() + i,1,nums2[j]);
                j++;
                count++;
                nums1.pop_back();
            }
            else
                i++;
        }
        while (j<n){
            nums1.insert(nums1.begin()+i,1,nums2[j]);
            j++;
            i++;
            nums1.pop_back();
        }
        
    }
};
