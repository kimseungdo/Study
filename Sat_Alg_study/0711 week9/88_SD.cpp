class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.end()-n, nums1.end());
        //show_v(nums1, m);
        
        for(int i=0; i<n; i++){
            nums1.push_back(nums2[i]);
        }
        //show_v(nums1, m+n);
        sort(nums1.begin(), nums1.end());
    }
    
    void show_v(vector<int>& v, int size){
        for(int i=0; i<size; i++){
            cout<< v[i] << " ";
        }cout<< endl;
    }
    
};
/*

*/