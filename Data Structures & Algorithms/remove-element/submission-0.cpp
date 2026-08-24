class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        vector<int>expectedList;
        
        
                for(int i =0;i<nums.size(); i++){
            if(nums[i]!=val){
                expectedList.push_back(nums[i]);
            }
                }
            
            for(int i =0; i< expectedList.size();i++){

                nums[i]=expectedList[i];
            }

        
        return expectedList.size();
    }
};