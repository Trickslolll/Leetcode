class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> copy(nums1.begin(),nums1.begin()+m);
        int ptr1 = 0 , ptr2 = 0;
        for(int i = 0 ; i < nums1.size(); i++){
            if(ptr1 >= m){
                nums1[i] = nums2[ptr2];
                ptr2++;
            }
            else if(ptr2 >= n){
                nums1[i] = copy[ptr1];
                ptr1++;
            }
            else if(copy[ptr1] < nums2[ptr2]){
                nums1[i] = copy[ptr1];
                ptr1++;
            }
            else if(copy[ptr1] > nums2[ptr2]){
                nums1[i] = nums2[ptr2];
                ptr2++;
            }
            else{
                nums1[i] = copy[ptr1];
                nums1[i+1] = nums1[i];
                ptr1++;
                ptr2++;
                i++;
            }
        }
    }
};
