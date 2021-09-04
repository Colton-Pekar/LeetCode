//Soln by Colton-Pekar
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include <string>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        double median = 0;
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector <int> nums3;
        
        //merge and sort
        nums3.insert(nums3.begin(), nums1.begin(), nums1.end());
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());
        sort(nums3.begin(), nums3.end());
        
        //median of merged array
        if (nums3.size()%2 == 0){
            //if even do average of middle 2
            double middle1 = nums3[(nums3.size()/2) - 1];
            double middle2 = nums3[nums3.size()/2];
            
            median = (middle1 + middle2)/2;
        }
        else {
            median = nums3[nums3.size()/2];
        }
        
    return median;
}
};