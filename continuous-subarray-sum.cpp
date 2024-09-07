class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        int l=nums.size();
        map<int, int>cnt;
        vector<int>sum(l+1);
        sum[0]=0;
        for(int i=1;i<l+1;i++){

            sum[i]= nums[i-1]+sum[i-1];

        

        }

          for(int i=1;i<l+1;i++){

            sum[i] %= k;

        

        }
        


        for(int i=1;i<l+1;i++){
              if(cnt[sum[i]] != 0){

                return true;
              }else{

                 cnt[sum[i-1]]=1;

              }

            
        }

        return false;
    }
};