class Solution {
public:
    int maxProduct(vector<int>& nums) {
      
        int currMax = nums[0],currMin=nums[0],ans=nums[0]; //initializing with 1 causes bugs since line 19 stores max between ans and currMAx and in EG: arr ={-2,0,-1} At the 1st index if ans = 1 then max(-2,1) is 1 which is wrong.
      
        
        for(int i = 1; i<nums.size();i++)
          
        {
            int temp = currMax; // since currMAx will change value in this iteration. Imp to store the previous value
          
            if(nums[i] == 0) currMax = currMin = 1;
          
            currMax = max(max(currMax*nums[i],currMin*nums[i]),nums[i]); //curr Max caclculates the maximum product achived right now
          
            currMin = min(min(currMin*nums[i],temp*nums[i]),nums[i]);// curr Min is also imp because a negative number multiplied by another negative may result in a large positve number. Therefore IMP to check max betweenn currMax and currMin.
            
            ans = max(currMax,ans); //global result or maxUntilNow
        }
  return ans;
    }

  
};
