class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0, neg=1;
        vector<int>result(nums.size());
        for(int i:nums){
            if(i>0){
                result[pos]=i;
                pos+=2;
            }
            else{
            result[neg]=i;
            neg+=2;}
        }

        return result;
    }
};