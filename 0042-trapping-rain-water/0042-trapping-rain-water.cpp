class Solution {
public:
    int trap(vector<int>& height) {
       int leftMax[100000], rightMax[100000];
       int n = height.size();
       leftMax[0] = 0;
       rightMax[n-1] = 0;
       for(int i=1; i<n; i++)
       {
        leftMax[i] = max(leftMax[i-1], height[i-1]);
       } 
       for(int i=n-2; i>=0; i--)
       {
        rightMax[i] = max(rightMax[i+1], height[i+1]);
       }
       int sum = 0;
       for(int i=1; i<n-1; i++)
       {
        sum += max(0, min(leftMax[i], rightMax[i]) - height[i]);
       }
       
       return sum;
    }
};