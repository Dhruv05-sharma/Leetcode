class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0, end = numbers.size()-1;
        
        while(st <= end)
        {
            
            if(target == numbers[st] + numbers[end])
            {
                return {st+1,end+1};
            }
            else if(target < numbers[st] + numbers[end])
            {
                end--;
            }
            else
            {
                st++;
            }
        }
        return {};
    }
};