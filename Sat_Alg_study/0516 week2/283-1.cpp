class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for (int i = 0; i<nums.size(); i++){
            if(nums[i]!=0){
                std::swap(nums[j++], nums[i]);
            }
        }
        
    }
};
