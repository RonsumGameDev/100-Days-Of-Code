class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int* valPtr = nullptr;
        int* iterPtr = nullptr;
        int k = 0;

        if(n > 0) {
            valPtr = &nums[0];
            iterPtr = &nums[n-1];
             while(valPtr <=  iterPtr) {
            
                if(*valPtr != val) {
                    valPtr++;
                } else if (*iterPtr != val) {
                    *valPtr = *iterPtr;
                    k++;
                    iterPtr--;
                    valPtr++;
                }

                if(*iterPtr == val) {
                    k++;
                    iterPtr--;
                }
                
            
        }

        }
  
        return (n-k);
    }
};
