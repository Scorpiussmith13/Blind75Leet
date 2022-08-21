class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
    vector<int> v; //to store the answer array
    
    map<int, int> m; //unordered map in use
    
    for(int i = 0; i < nums.size();i++){
        m.insert(pair<int, int>(nums[i],i)); // could have also used m[nums[i]]=i; Used for storing nums[] values in the map
        }
        
    for(int i=0;i<nums.size();i++){
        int z = target - nums[i]; //z stores the value to be searched in O(1) 
        if(m.count(z) < 1) continue; // if the number doesnt exist
        else if( m[z] == i) continue; // if number to be found and the number found in the map are the same; since we cannot take a number itself. Eg: arr={3,3} target = 6, we cannot take the 3 with index 0 twice therefore must check with for similar index in the searching nums vector and the number found in the keys value
        else{
          v.push_back(i); //pushing the index
          v.push_back(m[z]); // pushing the found index
          break; //without break the loop continues. If both numbers found return it.
            
        } 
        
    }
        
 return v; // returning the ans
    }
};
