class Solution {
public:
    int findGCD(vector<int>& nums) {
        int gcd=INT_MIN;
        int n= nums.size();
       
            sort(nums.begin(),nums.end());
            int largest=nums[n-1];
            int smallest=nums[0];
            for(int i=1;i<=largest;i++){
                if(smallest%i==0 && largest%i==0){
                    int cd=i;
                    gcd=max(gcd,cd);
                }

                }
                return gcd;

        
        
    }
};