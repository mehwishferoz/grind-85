#include <bits/stdc++.h>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]] = i;

        for(int i=0;i<nums.size();i++){
            int comp = target - nums[i];
            if(mp.count(comp) && mp[comp]!=i)
            return{i, mp[comp]};
        }
        return {{}};
    }
};