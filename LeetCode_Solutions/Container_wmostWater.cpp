//Soln by Colton-Pekar
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include <string>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        //initialize variables
        int right = height.size() - 1;
        int left = 0;
        int maxarea = 0;
        int temparea = 0;
        //loop through left and right, increment left when right = left
        while(left != right){
            if (height[left] > height[right]){
                temparea = min(height[right], height[left])*(right - left);
                right--;
                if (temparea > maxarea) maxarea = temparea;
            }
            else {
                temparea = min(height[right], height[left])*(right - left);
                left++;
                if (temparea > maxarea) maxarea = temparea;
            }
        }
        return maxarea;
    }
};