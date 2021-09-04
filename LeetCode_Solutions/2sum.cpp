//Soln by Colton-Pekar
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> numsindex;
        
        int size = nums.size();
        int left = 0;
        int right = 1;
        
        int targetaim;
        while (targetaim != target){
            //check initial addition and incriment right if != target
            while (right > left && right != size){
                targetaim = nums[left] + nums[right];
                if (targetaim == target){
                    numsindex = {left, right};
                    return numsindex;
                }
                right++;
            }

            //if right is num[max] then increment left and make right = left +1 and 
            left++;
            right = left + 1;
        }
        //if nothing
        return numsindex;
    }
};