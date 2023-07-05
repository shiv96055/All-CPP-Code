#include<iostream>
#include<vector>

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
        
        // TC -> O(N), SC -> O(1)
       int fast = nums[0];
       int slow = nums[0];
        
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(fast != slow);
        
        slow = nums[0];
    
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
        
        /* 
        
        APPROACH ->2
        T.C -> O(n), S.C-> O(n)
      vector<int> map(nums.size(), 0);
        int ans ;
        for(int i = 0; i<nums.size(); i++){
            if(map[nums[i]] == 0){
                map[nums[i]] = 1;
            }else{
                ans = nums[i];
                break;
            }
        }
        
        return ans ;
        
        */
        
        /* 
       
       APPROACH ->1
       T.C -> O(nlogn), S.C(1)
       sort(nums.begin(), nums.end());
        int ans;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                ans =nums[i];
                break;
            }
        }
      
        return ans;
        */
    }
};