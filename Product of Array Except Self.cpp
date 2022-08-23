class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      
        vector<int> ans(nums.size()); 
      
      int pre = 1,post = 1 ; // pre stores the prefix product values for the first run, post stores for second run
      
      for(int i = 0; i < nums.size(); i++)
      
      {
            ans[i] = pre; // previus iteration pre values is stored in ans
            pre *= nums[i]; // pre changes to current product of the array index given
       
        
        }
      
      for(int i = nums.size()-1;i >= 0; i--)
        {
      
        ans[i] *= post; // post is multiplied into the array since the ans[index] = post * pre
        post *= nums[i]; //post updated
                
        }
     
      return ans;  
    }
};

// Space - O(1)  Time- O(n)
