//
// Created by Zachary Weed on 1/31/23.
//
#include "CustomString.h"

int CustomString::lengthOfLongestSubstring(string s) {
    int stringLength = (s.length() - 1);
    int result = 0;

    for(int i = 0;i<stringLength;i++) {
        int array[256] = {0};
        for(int j = i; j<stringLength; j++) {
            if (s[j] && array[s[j]] == 1){
                break;
            }
                result = std::max(result, j - i + 1);
                array[s[j]] = 1;
            }
                array[s[i]] = 0;
        }
    return result;
};