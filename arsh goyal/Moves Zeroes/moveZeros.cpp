class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int nonzeros = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] !=0){
                swap(nums[nonzeros], nums[i]);
                nonzeros++;
            }
        }
    
        
        // approach -1
        /*
        int count0 = 0;
        int i = 0;
        
        while(i<nums.size()){
            
            if(nums[i] == 0){
                nums.erase(nums.begin() + i);
                count0++;
            }else{
                i++;
            }
        }
        
        while(count0 !=0){
            nums.push_back(0);
            count0--;
            }
            */
        
        
    }
};