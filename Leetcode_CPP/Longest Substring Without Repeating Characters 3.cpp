//
//  Longest Substring Without Repeating Characters 3.cpp
//  Leetcode_CPP
//
//  Created by 张珏 on 15/11/25.
//  Copyright © 2015年 JUE DUKE. All rights reserved.
//

#include <stdio.h>
#include <string>


//https://leetcode.com/problems/longest-substring-without-repeating-characters/

using std::string;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string findString;
        size_t length = s.length();
        int result = 0, temp = 0;
        for (size_t index = 0; index < length; index++) {
            char c = s[index];
            if (charInString(findString, c)) {
                if (temp > result) {
                    result = temp;
                }
                temp = 0;
                findString.clear();
            }
            findString += c;
            temp ++;
        }
        if (temp > result) {
            result = temp;
        }
        return result;
    }
    
    bool charInString(string s, char checkChar) {
        size_t size = s.size();
        if (size == 0) {
            return false;
        }
        bool result = false;
        size_t currentIndex = 0;
        while (1) {
            if (s[currentIndex] ==  checkChar) {
                result = true;
                break;
            } else {
                currentIndex ++;
            }
            if (currentIndex == size) {
                break;
            }
        }
        return result;
    }
};