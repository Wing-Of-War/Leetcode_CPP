//
//  ReverseInteger7.cpp
//  Leetcode_CPP
//
//  Created by JUE DUKE on 15/11/25.
//  Copyright © 2015年 JUE DUKE. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

//https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        int temp = x;
        int result = 0;
        do {
            result = result * 10 + temp % 10;
            temp = temp / 10;
        } while(temp);
        if (result > INT_MAX || result < INT_MIN) {
            return 0;
        }
        return result;
    }
};