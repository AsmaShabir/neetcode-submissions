class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;

        int res =0;
        int maxCount =0; 
        for(int i =0; i< nums.size(); i++){
            count[nums[i]]++;
           if(count[nums[i]] > maxCount){
            res =nums[i];
            maxCount = count[nums[i]];

           }

        }
        return res;
    }
};