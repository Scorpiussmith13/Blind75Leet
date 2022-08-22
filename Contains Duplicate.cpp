class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    set<int> s; // set only contains unique elements
    for(auto itr:nums){
            s.insert(itr); //O(logn) complexity
    }
                    
    if(s.size()!=nums.size()) return true; // if sizes differ we have duplicates in original array
    else return false;
    
    
    
    }
};

// Can also be done with Maps

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       map<int, int> m;
        for(auto itr:nums){
            
            if(m.find(itr)!=m.end()) m[itr]++;
            else m[itr] = 1;
            
            
        }
      for(auto itr:m){
        if(itr.second > 1) return  true;
      }  
        return false;
    }
};
