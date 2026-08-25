class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
     for(int num: nums){
        freq[num]++;
     }
        vector<pair<int, int>> arr;
        for(auto p : freq){
            arr.push_back({p.first,p.second});
        }
        // Step 3: Sort according to frequency
        sort(arr.begin(),arr.end(),[](auto &a,auto &b){
            return a.second > b.second;
        }) ;
         // Step 4: Take first k numbers
        vector<int> answer;

        for(int i =0; i<k; i++){
            answer.push_back(arr[i].first);

        }  
        return answer; 
        
    }
};
