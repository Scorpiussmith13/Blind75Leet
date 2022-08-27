class Solution {
public: // also known as Kadane's algo
  
    int maxSubArray(vector<int>& nums) {
      
        int max_sum_soFar =INT_MIN , sum_rightNow = 0;
      
        for(int i = 0;i<nums.size();i++)
        {
          
           sum_rightNow += nums[i];
          
            if(sum_rightNow > max_sum_soFar) 
              
              
                max_sum_soFar = sum_rightNow;
            
          
            if(sum_rightNow < 0)  sum_rightNow = 0;    
            
        }
        
        
      return max_sum_soFar;
        
    }
};

// remember: Maximum contagious positive sum 
