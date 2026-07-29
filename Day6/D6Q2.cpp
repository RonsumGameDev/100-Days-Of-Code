class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int c = 0;
        int n = nums.size() - 1;
        while(i != n || j != n) {
            if (nums[j] == 0) {
                c++;
            }
            if(j == n) {
                nums[i] = nums[j];
                break;
            }
            else if(nums[j] != 0) {
                nums[i++] = nums[j++];
            } else if(nums[i] != 0 && nums[j] == 0 ) {
                nums[i] =  nums[j++];
            } else if(nums[i] == 0 && nums[j] == 0) {
                j++;
            }
        }

        int k = 0;
        while(k < c) {
            nums[n - k] = 0;
            k++;
        }

    }
};
