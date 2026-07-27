class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long upperLimit = arr.size() + 1;
        long expectedSum = ((upperLimit) * (upperLimit + 1)) / 2;
        long resultedSum = 0;
        int missingN = 0;
        for(int i = 0; i < upperLimit - 1; i++) {
            resultedSum += arr[i];
        }
        missingN = expectedSum - resultedSum;
        return missingN;
    }
};
