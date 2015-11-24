//
//  TwoSum1.cpp
//  Leetcode_CPP
//
//  Created by JUE DUKE on 15/11/25.
//  Copyright © 2015年 JUE DUKE. All rights reserved.
//

#include <stdio.h>
#include <vector>


//https://leetcode.com/problems/two-sum/

using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        size_t inputSize = nums.size();
        vector<int> result;
        for(int i = 0; i < inputSize - 1 ; i++ ) {
            for (int j = i + 1;  j < inputSize ; j++ ) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i+1);
                    result.push_back(j+1);
                    break;
                }
            }
        }
        return result;
    }
};