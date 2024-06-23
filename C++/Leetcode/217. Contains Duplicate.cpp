class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
            int count=0;
        for(auto elem : nums){
            count++;

        }

        int count1=0;
        set<int> numss(nums.begin(),nums.end());

        for(auto elems: numss){
            count1++;
        }
        if(count==count1){
            return false;
        }
        else {
            return true;
        }

    }
};
