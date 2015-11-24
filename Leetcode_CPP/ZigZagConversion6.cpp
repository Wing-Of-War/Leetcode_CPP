//
//  ZigZagConversion6.cpp
//  Leetcode_CPP
//
//  Created by JUE DUKE on 15/11/24.
//  Copyright © 2015年 JUE DUKE. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using std::string;

//https://leetcode.com/problems/zigzag-conversion/

class Solution {
public:
    string convert(string s, int numRows) {
        long length = s.size();
        string r(length, '0');
        int space = (numRows - 1) * 2;
        if (space == 0) {
            space = 1;
        }
        int resIndex = 0, oriIndex = 0;
        int row = 0;
        int restSpace = space - (row * 2);
        while (resIndex <= length) {
            
            r[resIndex] = s[oriIndex];
            resIndex++;
            if (restSpace == 0) {
                restSpace = space;
            }
            oriIndex += restSpace;
            if (oriIndex > length-1) {
                row ++;
                oriIndex = row;
                restSpace = space - (row * 2);
                continue;
            }
            restSpace = space - restSpace;
            
        }
        return r;
    }
};
