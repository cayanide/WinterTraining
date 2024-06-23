class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

       if(0<=val&&val<=100){

        nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
        int count=0;
        for(auto elem : nums){
            count++;

        }

        return count;

       }
       else{
        return 0;
       }
    }


};
