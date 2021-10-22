#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mv(nums1.size() + nums2.size());
        // merge the two vectors
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), mv.begin());
        return ((mv.size()%2 != 0) ? (mv[mv.size()/2]) : ((mv[mv.size()/2]+mv[mv.size()/2-1])/2.0));
    }
};