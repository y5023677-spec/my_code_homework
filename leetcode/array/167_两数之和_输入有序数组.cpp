class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;/*虽然下标说是从1开始，但实际存储还是从0开始*/ 
        while (left<right) {
            int s = numbers[left] + numbers[right];
            if (s == target) {
                return {left + 1, right + 1}; 
            }
            s > target ? right-- : left++;
        }
        return{-1,-1};
    }
};
